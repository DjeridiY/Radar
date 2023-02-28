/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** in_tower_are.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>
#include <math.h>

int in_tower(radar_t *game, int i, int j)
{
    in_tower_area(i, game);
    in_tower_area(j, game);
    if (game->lugia[i]->protected == 1 || game->lugia[j]->protected == 1) {
        return 0;
    }
    return 1;
}
