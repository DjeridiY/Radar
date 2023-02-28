/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** check_collision.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void check_collision_ok_tier(radar_t *game, int i, int j)
{
    if (game->lugia[i]->delay <= game->secondes &&
    game->lugia[j]->delay <= game->secondes) {
        if (game->checker[i]->position.x < game->checker[j]->position.x +
            game->checker[j]->size.x && game->checker[i]->position.x +
            game->checker[i]->size.x > game->checker[j]->position.x &&
            game->checker[i]->position.y < game->checker[j]->position.y +
            game->checker[j]->size.y && game->checker[i]->position.y +
            game->checker[i]->size.y > game->checker[j]->position.y) {
            game->lugia[i]->alive = 0;
            game->lugia[j]->alive = 0;
            game->off += 2;
        }
    }
}

void collision_or_not(radar_t *game, int i, int j)
{
    if (game->lugia[i]->alive == 1 && game->lugia[j]->alive == 1) {
        if (in_tower(game, i, j) == 0) {
            return;
        }
        check_collision_ok_tier(game, i, j);
    }
}

void check_each_lugia(radar_t *game, int i)
{
    for (int j = 0; j < game->nbr_of_lugia; j++) {
        if (i == j) {
            continue;
        }
        game->checker[j]->position =
        sfRectangleShape_getPosition(game->lugia[j]->hitbox);
        collision_or_not(game, i, j);
    }
}

void check_collision(radar_t *game)
{
    for (int i = 0; i < game->nbr_of_lugia; i++) {
        game->checker[i]->position =
        sfRectangleShape_getPosition(game->lugia[i]->hitbox);
        check_each_lugia(game, i);
    }
}
