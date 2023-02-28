/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-myls-yanis.djeridi
** File description:
** my_ls_classique.c
*/

#include <stdio.h>
#include "my.h"
#include <stdlib.h>
#include <string.h>

char **reverse_tab(char** tab, int count)
{
    char* temp;
    int length = count - 1;
    int m = 0;

    while (m < length) {
        temp = tab[m];
        tab[m] = tab[length];
        tab[length] = temp;
        length--;
        m++;
    }
    return tab;
}
