/*
** EPITECH PROJECT, 2022
** Librairy
** File description:
** my_strdup_array_of_string.c
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char **my_strdup_array_of_string(char **arr, int nb_rows, int nb_cols)
{
    int i = 0;
    char **tab;
    tab = malloc(sizeof(char *) * (nb_cols));

    while (i < nb_cols) {
        tab[i] = my_strdup(arr[i]);
        i++;
    }
    return tab;
}
