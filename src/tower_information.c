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

void free_this_tab(char **tab_line)
{
    for (int i = 0; tab_line[i] != NULL; i++) {
        free(tab_line[i]);
    }
    free(tab_line);
}

void set_position_and_radius(radar_t *game, int tower_rank,
char **tab_line, float radius)
{
    game->tower[tower_rank]->position.x = string_to_int(tab_line[1]);
    game->tower[tower_rank]->position.y = string_to_int(tab_line[2]);
    game->tower[tower_rank]->radius = radius;
}

void tower_information(radar_t *game, int j, int tower_rank)
{
    char **tab_line = my_str_to_word_array(game->tab[j], ' ');
    sfVector2f pos;
    int test = string_to_int(tab_line[3]);
    float radius = ((float)test / 100) * 1920;

    set_position_and_radius(game, tower_rank, tab_line, radius);
    sfSprite_setPosition(game->tower[tower_rank]->sprite,
    game->tower[tower_rank]->position);
    game->tower[tower_rank]->area = sfCircleShape_create();
    sfCircleShape_setRadius(game->tower[tower_rank]->area,
    game->tower[tower_rank]->radius);
    pos.x = game->tower[tower_rank]->position.x -
    game->tower[tower_rank]->radius;
    pos.y = game->tower[tower_rank]->position.y -
    game->tower[tower_rank]->radius;
    sfCircleShape_setPosition(game->tower[tower_rank]->area, pos);
    sfCircleShape_setFillColor(game->tower[tower_rank]->area,
    sfColor_fromRGBA(255, 0, 0, 0));
    sfCircleShape_setOutlineThickness(game->tower[tower_rank]->area, 2);
    free_this_tab(tab_line);
}
