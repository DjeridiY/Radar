/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** create_wallpaper.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"

tower_t *create_tower(tower_t *tower)
{
    tower->sprite = sfSprite_create();
    tower->texture = sfTexture_createFromFile("ressource/tower.png", NULL);
    sfSprite_setTexture(tower->sprite, tower->texture, sfTrue);
    sfSprite_setOrigin(tower->sprite, (sfVector2f) {20, 20});
    return (tower);
}
