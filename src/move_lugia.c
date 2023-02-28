/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** move_lugia.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void move_or_not(radar_t *game, int i)
{
    float factor = 0;
    sfVector2f movement;
    sfVector2f position_actual;

    if (game->lugia[i]->alive == 1) {
        if (game->lugia[i]->delay <= game->secondes) {
            factor = sfTime_asSeconds(game->time_elapsed);
            movement.x = game->lugia[i]->direction.x *
            game->lugia[i]->speed * factor;
            movement.y = game->lugia[i]->direction.y *
            game->lugia[i]->speed * factor;
            sfSprite_move(game->lugia[i]->sprite, movement);
            sfRectangleShape_move(game->lugia[i]->hitbox, movement);
        }
        sfClock_restart(game->clock);
    }
}

void move_lugia(radar_t *game)
{
    float factor = 0;
    sfVector2f movement;
    sfVector2f position_actual;

    for (int i = 0; i < game->nbr_of_lugia; i++) {
        move_or_not(game, i);
    }
}
