/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** calculate_angle.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>
#include <math.h>

void wich_angle(sfVector2f orientation, radar_t *game, int i)
{
    if (orientation.x >= 0 && orientation.y >= 0) {
        game->lugia[i]->angle =
        atan(orientation.y / orientation.x) * 180 / 3.14159265359;
    }
    if (orientation.x >= 0 && orientation.y < 0) {
        game->lugia[i]->angle = 360 +
        atan(orientation.y / orientation.x) * 180 / 3.14159265359;
    }
    if (orientation.x < 0 && orientation.y < 0) {
        game->lugia[i]->angle = 180 +
        atan(orientation.y / orientation.x) * 180 / 3.14159265359;
    }
    if (orientation.x < 0 && orientation.y >= 0) {
        game->lugia[i]->angle = 180 +
        atan(orientation.y / orientation.x) * 180 / 3.14159265359;
    }
}

void calculate_angle(radar_t *game)
{
    float angle = 0;
    sfVector2f orientation;

    for (int i = 0; i < game->nbr_of_lugia; i++) {
        orientation.x = (game->lugia[i]->position_arrival.x
        - game->lugia[i]->position_departure.x);
        orientation.y = (game->lugia[i]->position_arrival.y
        - game->lugia[i]->position_departure.y);
        wich_angle(orientation, game, i);
        sfSprite_setRotation(game->lugia[i]->sprite,
        game->lugia[i]->angle + 90);
        sfRectangleShape_setRotation(game->lugia[i]->hitbox,
        game->lugia[i]->angle);
    }
}
