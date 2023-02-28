/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** analyse_events.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include <stdbool.h>

void close_window(sfEvent event, radar_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(game->window);
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
}

bool key_released(sfKeyCode key, sfEvent event)
{
    if (event.type == sfEvtKeyReleased && event.key.code == key) {
        return true;
    }
    return false;
}

void user_interaction(sfEvent event, radar_t *game)
{
    if (key_released(sfKeyL, event)) {
        game->hitbox_display = !game->hitbox_display;
    }
    if (key_released(sfKeyS, event)) {
        game->sprite_display = !game->sprite_display;
    }
}

void analyse_event(radar_t *game)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        close_window(event, game);
        user_interaction(event, game);
    }
}
