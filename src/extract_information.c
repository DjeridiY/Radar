/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** extract_information.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int extract_information(radar_t *game, char *filename)
{
    size_t len = 0;
    int size = 0;
    game->nbr_of_lines = 0;
    game->tab = malloc(sizeof(char *) * (10000));
    char *actual_line = NULL;
    FILE *fichier = fopen(filename, "r");

    if (fichier == NULL)
        return 84;
    while ((size = getline(&actual_line, &len, fichier)) != -1) {
        game->tab[game->nbr_of_lines] = malloc(sizeof(char) * len);
        my_strcpy(game->tab[game->nbr_of_lines], actual_line);
        free(actual_line);
        actual_line = NULL;
        game->nbr_of_lines += 1;
    }
    fclose(fichier);
    if (game->nbr_of_lines == 0)
        return 84;
    return 0;
}
