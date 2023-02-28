/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** create.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"

void initialize_tower(radar_t *game)
{
    for (int i = 0; i < game->nbr_of_tower; i++) {
        game->tower[i] = malloc(sizeof(tower_t));
        game->tower[i] = create_tower(game->tower[i]);
    }
}

void initialize_lugia(radar_t *game)
{
    for (int i = 0; i < game->nbr_of_lugia; i++) {
        game->lugia[i] = malloc(sizeof(lugia_t));
        game->lugia[i] = create_lugia(game->lugia[i]);
    }
}

void initialize_wallpaper(radar_t *game)
{
    for (int i = 0; i < 1; i++) {
        game->wallpaper[i] = malloc(sizeof(wallpaper_t));
        game->wallpaper[i] = create_wallpaper(game->wallpaper[i],
        "ressource/bleu.jpg");
    }
}

void initialize_text(radar_t *game)
{
    for (int i = 0; i < 7; i++) {
        game->info[i] = malloc(sizeof(info_t));
        game->info[i] = create_text(game->info[i]);
    }
}

void create(radar_t *game)
{
    create_window(game);
    game->clock = sfClock_create();
    initialize_wallpaper(game);
    initialize_lugia(game);
    initialize_tower(game);
    initialize_text(game);
    for (int i = 0; i < game->nbr_of_lugia; i++) {
        game->checker[i] = malloc(sizeof(checker_t));
        game->checker[i] = create_checker(game->checker[i]);
    }
    sfRenderWindow_setFramerateLimit(game->window, 60);
    game->real_clock = sfClock_create();
}
