/*
** EPITECH PROJECT, 2022
** Librairy
** File description:
** free_array_of_string.c
*/

#include <string.h>
#include <stdlib.h>

void free_array_of_string(char **tab, int nb_cols)
{
    for (int i = 0; i < nb_cols; i++) {
        free(tab[i]);
    }
    free(tab);
}
