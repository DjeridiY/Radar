/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** create_window.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "radar.h"

void create_window(radar_t *game)
{
    sfVideoMode mode = {1920, 1080, 32};

    game->window =
    sfRenderWindow_create(mode, "My_Radar", sfResize | sfClose, NULL);
}
