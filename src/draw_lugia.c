/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** draw_lugia.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void conditional_draw_lugia(radar_t *game, int i)
{
    if (game->sprite_display == 1) {
        if (game->lugia[i]->alive == 1) {
            sfRenderWindow_drawSprite(game->window,
            game->lugia[i]->sprite, NULL);
        }
    }
    if (game->hitbox_display == 1) {
        if (game->lugia[i]->alive == 1) {
            sfRenderWindow_drawRectangleShape(game->window,
            game->lugia[i]->hitbox, NULL);
        }
    }
}

void check_if_lugia_was_alive(radar_t *game, int i)
{
    if (game->lugia[i]->alive == 1) {
        if (game->lugia[i]->delay <= game->secondes) {
            conditional_draw_lugia(game, i);
        }
    }
}

void draw_lugia(radar_t *game)
{
    for (int i = 0; i < game->nbr_of_lugia; i++) {
        check_if_lugia_was_alive(game, i);
    }
}
