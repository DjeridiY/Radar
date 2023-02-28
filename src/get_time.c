/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** get_time.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void get_time(radar_t *game)
{
    game->time_elapsed = sfClock_getElapsedTime(game->clock);
    game->real_time = sfClock_getElapsedTime(game->real_clock);
    game->secondes = sfTime_asSeconds(game->real_time);
}
