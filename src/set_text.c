/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** set_text.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void set_text(radar_t *game)
{
    sfText_setString(game->info[0]->text, "Entity[S] |");
    sfText_setCharacterSize(game->info[0]->text, 25);
    sfText_setPosition(game->info[0]->text, (sfVector2f) {10, 20});
    sfText_setString(game->info[1]->text, "Hitbox[L] |");
    sfText_setCharacterSize(game->info[1]->text, 25);
    sfText_setPosition(game->info[1]->text, (sfVector2f) {9, 70});
    sfText_setCharacterSize(game->info[2]->text, 30);
    sfText_setPosition(game->info[2]->text, (sfVector2f) {1850, 22});
    sfText_setString(game->info[3]->text, "ON");
    sfText_setCharacterSize(game->info[3]->text, 25);
    sfText_setPosition(game->info[3]->text, (sfVector2f) {120, 22});
    sfText_setString(game->info[4]->text, "OFF");
    sfText_setCharacterSize(game->info[4]->text, 25);
    sfText_setPosition(game->info[4]->text, (sfVector2f) {120, 22});
    sfText_setString(game->info[5]->text, "ON");
    sfText_setCharacterSize(game->info[5]->text, 25);
    sfText_setPosition(game->info[5]->text, (sfVector2f) {121, 72});
    sfText_setString(game->info[6]->text, "OFF");
    sfText_setCharacterSize(game->info[6]->text, 25);
    sfText_setPosition(game->info[6]->text, (sfVector2f) {120, 72});
}
