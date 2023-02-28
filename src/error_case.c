/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** error_case.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

int verif_string(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            return 0;
        }
        if (str[i] >= 48 && str[i] <= 57) {
        } else {
            return (84);
        }
        i++;
    }
    return 0;
}

void free_table(char **temp)
{
    for (int b = 0; temp[b] != NULL; b++) {
        free(temp[b]);
    }
    free(temp);
}

int error_tower(radar_t *game, int j)
{
    int i = 0;
    char **temp = my_str_to_word_array(game->tab[j], ' ');

    while (temp[i] != 0) {
        i++;
    }
    if (i != 4) {
        return 84;
    }
    if (string_to_int(temp[1]) > 1920 || string_to_int(temp[1]) < 0
    || string_to_int(temp[2]) > 1080 || string_to_int(temp[2]) < 0) {
        return 84;
    }
    for (int a = 1; temp[a] != 0; a++) {
        if (verif_string(temp[a]) == 84) {
            return 84;
        }
    }
    free_table(temp);
}

int error_lugia(radar_t *game, int j)
{
    int i = 0;
    char **temp = my_str_to_word_array(game->tab[j], ' ');

    while (temp[i] != 0) {
        i++;
    }
    if (i != 7)
        return 84;
    if (string_to_int(temp[1]) > 1920 || string_to_int(temp[1]) < 0
    || string_to_int(temp[2]) > 1080 || string_to_int(temp[2]) < 0)
        return 84;
    if (string_to_int(temp[3]) > 1920 || string_to_int(temp[3]) < 0
    || string_to_int(temp[4]) > 1080 || string_to_int(temp[4]) < 0)
        return 84;
    for (int a = 1; temp[a] != 0; a++) {
        if (verif_string(temp[a]) == 84) {
            return 84;
        }
    }
    free_table(temp);
}
