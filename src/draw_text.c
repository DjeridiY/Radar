/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** draw_text.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void draw_text(radar_t *game)
{
    sfText_setString(game->info[2]->text, int_to_string(game->secondes));
    sfRenderWindow_drawText(game->window, game->info[0]->text, NULL);
    sfRenderWindow_drawText(game->window, game->info[1]->text, NULL);
    sfRenderWindow_drawText(game->window, game->info[2]->text, NULL);
    if (game->sprite_display == 1) {
        sfRenderWindow_drawText(game->window, game->info[3]->text, NULL);
    } else {
        sfRenderWindow_drawText(game->window, game->info[4]->text, NULL);
    }
    if (game->hitbox_display == 1) {
        sfRenderWindow_drawText(game->window, game->info[5]->text, NULL);
    } else {
        sfRenderWindow_drawText(game->window, game->info[6]->text, NULL);
    }
}
