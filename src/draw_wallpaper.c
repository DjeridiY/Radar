/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** draw_wallpaper.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void draw_wallpaper(radar_t *game)
{
    sfRenderWindow_drawSprite(game->window,
    game->wallpaper[0]->sprite, NULL);
}
