/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** check_tower.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

int check_tower(radar_t *game, int j, int tower_rank)
{
    if (game->tab[j][0] == 'T') {
        if (error_tower(game, j) == 84) {
            return (-1);
        }
        tower_information(game, j, tower_rank);
        tower_rank++;
    }
    return tower_rank;
}

int check_tower_info(radar_t *game)
{
    int tower_rank = 0;

    for (int j = 0; j < game->nbr_of_lines; j++) {
        tower_rank = check_tower(game, j, tower_rank);
        if (tower_rank == (-1)) {
            return 84;
        }
    }
    return 0;
}
