/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** destroy.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "radar.h"
#include "my.h"
#include <stdlib.h>

void destroy_tower_and_lugia(radar_t *game)
{
    for (int m = 0; m < game->nbr_of_lugia; m++) {
        sfSprite_destroy(game->lugia[m]->sprite);
        sfTexture_destroy(game->lugia[m]->texture);
        sfRectangleShape_destroy(game->lugia[m]->hitbox);
        free(game->lugia[m]);
    }
    for (int m = 0; m < game->nbr_of_tower; m++) {
        sfSprite_destroy(game->tower[m]->sprite);
        sfTexture_destroy(game->tower[m]->texture);
        sfCircleShape_destroy(game->tower[m]->area);
        free(game->tower[m]);
    }
    for (int m = 0; m < 7; m++) {
        sfText_destroy(game->info[m]->text);
        sfFont_destroy(game->info[m]->font);
        free(game->info[m]);
    }
    free(game->info);
    sfClock_destroy(game->clock);
}

void destroy(radar_t *game)
{
    for (int m = 0; m < 1; m++) {
        sfSprite_destroy(game->wallpaper[m]->sprite);
        sfTexture_destroy(game->wallpaper[m]->texture);
        free(game->wallpaper[m]);
    }
    for (int m = 0; m < game->nbr_of_lines; m++) {
        free(game->tab[m]);
    }
    for (int m = 0; m < game->nbr_of_lugia; m++) {
        free(game->checker[m]);
    }
    free(game->checker);
    free(game->tab);
    destroy_tower_and_lugia(game);
    sfRenderWindow_destroy(game->window);
    free(game->wallpaper);
    free(game->lugia);
    free(game->tower);
    free(game);
}
