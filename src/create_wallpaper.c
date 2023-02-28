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

wallpaper_t *create_wallpaper(wallpaper_t *wallpaper, char *filename)
{
    wallpaper->sprite = sfSprite_create();
    wallpaper->texture = sfTexture_createFromFile(filename, NULL);
    sfSprite_setTexture(wallpaper->sprite, wallpaper->texture, sfTrue);
    return (wallpaper);
}
