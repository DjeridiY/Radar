/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** check_collision_on_quad.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>
#include <math.h>

void check_sub_quad(radar_t *game, quadtree_t *quad)
{
    if (quad->north_west != NULL) {
        check_collision_on_quad(game, quad->north_west);
    }
    if (quad->north_east != NULL) {
        check_collision_on_quad(game, quad->north_east);
    }
    if (quad->south_west != NULL) {
        check_collision_on_quad(game, quad->south_west);
    }
    if (quad->south_east != NULL) {
        check_collision_on_quad(game, quad->south_east);
    }
}

void in_tower_area(int i, radar_t *game)
{
    sfVector2f pos_i = sfRectangleShape_getPosition(game->lugia[i]->hitbox);
    float distance = 0;
    sfVector2f tower_pos;
    float radius;

    for (int k = 0; k < game->nbr_of_tower; k++) {
        tower_pos = game->tower[k]->position;
        radius = game->tower[k]->radius;

        distance = sqrt((tower_pos.x - pos_i.x) *
        (tower_pos.x - pos_i.x) +
        (tower_pos.y - pos_i.y) *
        (tower_pos.y - pos_i.y));
        if (distance <= radius) {
            game->lugia[i]->protected = 1;
            return;
        }
    }
    game->lugia[i]->protected = 0;
}

int check_two_lugia_collision(quadtree_t *quad, radar_t *game, int i, int j)
{
    sfRectangleShape* object1;
    sfRectangleShape *object2;
    sfVector2f pos1;
    sfVector2f size1;
    sfVector2f pos2;
    sfVector2f size2;

    if (in_tower(game, i, j) == 0) {
        return 0;
    }
    object1 = quad->box[i];
    object2 = quad->box[j];
    pos1 = sfRectangleShape_getPosition(object1);
    size1 = sfRectangleShape_getSize(object1);
    pos2 = sfRectangleShape_getPosition(object2);
    size2 = sfRectangleShape_getSize(object2);
    if (pos1.x < pos2.x + size2.x && pos1.x + size1.x > pos2.x &&
    pos1.y < pos2.y + size2.y && pos1.y + size1.y > pos2.y) {
        on_collision(i, j, game);
    }
}

void delay_passed_for_collision(int i, int j, quadtree_t *quad,
radar_t *game)
{
    if (game->lugia[i]->delay <= game->secondes &&
        game->lugia[j]->delay <= game->secondes) {
        check_two_lugia_collision(quad, game, i, j);
    }
}

int check_collision_on_quad(radar_t *game, quadtree_t *quad)
{
    if (quad->box == NULL) {
        return 0;
    }
    for (int i = 0; i < quad->nbr_of_objects; i++) {
        for (int j = i + 1; j < quad->nbr_of_objects; j++) {
            delay_passed_for_collision(i, j, quad, game);
        }
    }
    check_sub_quad(game, quad);
    return 0;
}
