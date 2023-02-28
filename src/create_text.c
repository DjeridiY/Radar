/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** create_text.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"

info_t *create_text(info_t *info)
{
    info->font = sfFont_createFromFile("ressource/oswald_bold.ttf");
    info->text = sfText_create();
    sfText_setString(info->text, "0");
    sfText_setFont(info->text, info->font);
    sfText_setCharacterSize(info->text, 80);
    return (info);
}
