/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** on_collision.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>
#include <math.h>

void on_collision(int i, int j, radar_t *game)
{
    if (game->lugia[i]->protected == 0 && game->lugia[j]->protected == 0) {
        if (game->lugia[i]->alive == 1 && game->lugia[j]->alive == 1) {
            game->lugia[i]->alive = 0;
            game->lugia[j]->alive = 0;
            game->off += 2;
        }
    }
}
