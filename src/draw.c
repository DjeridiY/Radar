/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** draw.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void draw(radar_t *game)
{
    draw_wallpaper(game);
    draw_lugia(game);
    draw_tower(game);
    draw_text(game);
}
