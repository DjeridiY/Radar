/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** draw_tower.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void draw_tower(radar_t *game)
{
    for (int i = 0; i < game->nbr_of_tower; i++) {
        if (game->hitbox_display == 1) {
            sfRenderWindow_drawCircleShape(game->window,
            game->tower[i]->area, NULL);
        }
        if (game->sprite_display == 1) {
            sfRenderWindow_drawSprite(game->window,
            game->tower[i]->sprite, NULL);
        }
    }
}
