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

lugia_t *create_lugia(lugia_t *lugia)
{
    lugia->sprite = sfSprite_create();
    lugia->texture = sfTexture_createFromFile("ressource/lugia.png", NULL);
    sfSprite_setOrigin(lugia->sprite, (sfVector2f) {10, 10});
    sfSprite_setTexture(lugia->sprite, lugia->texture, sfTrue);
    lugia->hitbox = sfRectangleShape_create();
    sfRectangleShape_setSize(lugia->hitbox,
    (sfVector2f) {20, 20});
    sfRectangleShape_setOrigin(lugia->hitbox, (sfVector2f) {10, 10});
    sfRectangleShape_setFillColor(lugia->hitbox,
    sfColor_fromRGBA(255, 255, 255, 0));
    sfRectangleShape_setOutlineThickness(lugia->hitbox, 2);
    lugia->alive = 1;
    lugia->protected = 0;
    lugia->deplacement = (sfVector2f) {0, 0};
    lugia->direction = (sfVector2f) {0, 0};
    lugia->distance = 0;
    lugia->angle = 0;
    return (lugia);
}
