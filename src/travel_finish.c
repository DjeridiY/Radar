/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** travel_finish.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>
#include <math.h>

void same_coords(radar_t *game, sfVector2f actual_position, int i)
{
    if (abs((int)actual_position.y -
    (int)game->lugia[i]->position_arrival.y) <= 5) {
        if (abs((int)actual_position.x -
        (int)game->lugia[i]->position_arrival.x) <= 5) {
            game->lugia[i]->alive = 0;
            game->off++;
        }
    }
}

void travel_finish(radar_t *game)
{
    sfVector2f actual_position;

    for (int i = 0; i < game->nbr_of_lugia; i++) {
        if (game->lugia[i]->alive == 1) {
            actual_position =
            sfSprite_getPosition(game->lugia[i]->sprite);
            same_coords(game, actual_position, i);
        }
    }
}
