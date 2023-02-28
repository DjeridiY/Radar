/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** check_lugia.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

int check_lugia(radar_t *game, int k, int lugia_rank)
{
    if (game->tab[k][0] == 'A') {
        if (error_lugia(game, k) == 84) {
            return (-1);
        }
        lugia_information(game, k, lugia_rank);
        lugia_rank++;
    }
    return lugia_rank;
}

int check_lugia_info(radar_t *game)
{
    int lugia_rank = 0;

    for (int k = 0; k < game->nbr_of_lines; k++) {
        lugia_rank = check_lugia(game, k, lugia_rank);
        if (lugia_rank == (-1)) {
            return 84;
        }
    }
    return 0;
}
