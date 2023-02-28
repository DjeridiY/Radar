/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** calculate_trajectory.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>
#include <math.h>

void calculate_trajectory(radar_t *game)
{
    for (int i = 0; i < game->nbr_of_lugia; i++) {
        game->lugia[i]->deplacement.x = game->lugia[i]->position_arrival.x -
        game->lugia[i]->position_departure.x,
        game->lugia[i]->deplacement.y = game->lugia[i]->position_arrival.y -
        game->lugia[i]->position_departure.y;
        game->lugia[i]->distance = sqrt(game->lugia[i]->deplacement.x
        * game->lugia[i]->deplacement.x +
        game->lugia[i]->deplacement.y *
        game->lugia[i]->deplacement.y);
        game->lugia[i]->direction.x = game->lugia[i]->deplacement.x /
        game->lugia[i]->distance;
        game->lugia[i]->direction.y = game->lugia[i]->deplacement.y /
        game->lugia[i]->distance;
    }
}
