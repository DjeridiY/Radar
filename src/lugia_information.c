/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** lugia_information.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void lugia_information(radar_t *game, int k, int lugia_rank)
{
    char **tab_line = my_str_to_word_array(game->tab[k], ' ');

    game->lugia[lugia_rank]->position_departure =
    (sfVector2f) {string_to_int(tab_line[1]), string_to_int(tab_line[2])};
    sfSprite_setPosition(game->lugia[lugia_rank]->sprite,
    game->lugia[lugia_rank]->position_departure);
    game->lugia[lugia_rank]->position_arrival =
    (sfVector2f) {string_to_int(tab_line[3]), string_to_int(tab_line[4])};
    game->lugia[lugia_rank]->speed = string_to_int(tab_line[5]);
    game->lugia[lugia_rank]->delay = string_to_int(tab_line[6]);
    sfRectangleShape_setPosition(game->lugia[lugia_rank]->hitbox,
    (sfVector2f) {string_to_int(tab_line[1]),
    string_to_int(tab_line[2])});
    for (int i = 0; tab_line[i] != NULL; i++) {
        free(tab_line[i]);
    }
    free(tab_line);
}
