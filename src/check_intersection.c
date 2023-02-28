/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** check_intersection.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"

int check_intersection(radar_t *game, int a, int b)
{
    int cx = game->tower[a]->position.x + game->tower[a]->radius;
    int dx = game->tower[b]->position.x + game->tower[b]->radius;
    int cy = game->tower[a]->position.y + game->tower[a]->radius;
    int dy = game->tower[b]->position.y + game->tower[b]->radius;
    int cr = game->tower[a]->radius;
    int dr = game->tower[b]->radius;

    if ((cx - dx) * (cx - dx) + (cy - dy) * (cy - dy)
        <= (cr + dr) * (cr + dr)) {
        return 1;
    } else {
        return 0;
    }
}
