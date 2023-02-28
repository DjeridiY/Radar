/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** quadtree_add_hitbox.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void south_west_or_north_east(sfVector2f pos, sfRectangleShape *hitbox,
int depth, quadtree_t *quad)
{
    if (pos.y < quad->square.top + quad->square.height / 2) {
        quad_add_hitbox(quad->north_west, hitbox, depth + 1);
    } else {
        quad_add_hitbox(quad->south_west, hitbox, depth + 1);
    }
}

void north_east_or_north_west(sfVector2f pos, quadtree_t *quad,
sfRectangleShape *hitbox, int depth)
{
    if (pos.y < quad->square.top + quad->square.height / 2) {
        quad_add_hitbox(quad->north_east, hitbox, depth + 1);
    } else {
        quad_add_hitbox(quad->south_east, hitbox, depth + 1);
    }
}

void quad_square_add(quadtree_t *quad, int depth)
{
    sfRectangleShape *hitbox;
    sfVector2f size;
    sfVector2f pos;

    create_sub_quatree(quad);
    for (int i = 0; i < quad->nbr_of_objects; i++) {
        hitbox = quad->box[i];
        pos = sfRectangleShape_getPosition(hitbox);
        size = sfRectangleShape_getSize(hitbox);
        if (pos.x < quad->square.left + quad->square.width / 2) {
            south_west_or_north_east(pos, hitbox, depth, quad);
        } else {
            north_east_or_north_west(pos, quad, hitbox, depth);
        }
    }
    free(quad->box);
    quad->box = NULL;
    quad->nbr_of_objects = 0;
}

void no_more_depth(quadtree_t *game, sfRectangleShape *square,
quadtree_t *quad, int depth)
{
    sfRectangleShape **new_box;

    quad->nbr_of_objects += 1;
    new_box = malloc(sizeof(sfRectangleShape *) * quad->nbr_of_objects);
    for (int i = 0; i < quad->nbr_of_objects - 1; i++) {
        new_box[i] = quad->box[i];
    }
    new_box[quad->nbr_of_objects - 1] = square;
    free(quad->box);
    quad->box = new_box;
}

int quad_add_hitbox(quadtree_t *quad, sfRectangleShape *square, int depth)
{
    if (quad->box == NULL) {
        quad->box = malloc(sizeof(sfRectangleShape*));
        quad->box[0] = square;
        quad->nbr_of_objects = 1;
        return 0;
    }
    if (quad->nbr_of_objects > 10 && depth < 5) {
        quad_square_add(quad, depth);
    } else {
        no_more_depth(quad, square, quad, depth);
    }
    return 0;
}
