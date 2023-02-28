/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** information_processing.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void lugia_and_tower_number(radar_t *game, int i)
{
    for (int j = 0; game->tab[i][j] != '\0'; j++) {
        if (game->tab[i][j] == 'A') {
            game->nbr_of_lugia++;
        }
        if (game->tab[i][j] == 'T') {
            game->nbr_of_tower++;
        }
    }
}

void init_value(radar_t *game)
{
    game->hitbox_display = 1;
    game->sprite_display = 1;
    game->nbr_of_lugia = 0;
    game->nbr_of_tower = 0;
    game->off = 0;
}

int information_processing(radar_t *game)
{
    init_value(game);
    for (int i = 0; i < game->nbr_of_lines; i++) {
        lugia_and_tower_number(game, i);
    }
    game->wallpaper = malloc(sizeof(wallpaper_t *));
    game->lugia = malloc(sizeof(lugia_t *) * (game->nbr_of_lugia));
    game->tower = malloc(sizeof(tower_t *) * (game->nbr_of_tower));
    game->info = malloc(sizeof(info_t *) * (7));
    game->checker = malloc(sizeof(checker_t *) * (game->nbr_of_lugia));
    create(game);
    if (check_lugia_info(game) == 84) {
        return 84;
    }
    if (check_tower_info(game) == 84) {
        return 84;
    }
}
