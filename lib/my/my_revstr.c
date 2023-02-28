/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** Reverse a string
*/

#include <criterion/criterion.h>

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int premier = 0;
    int dernier = my_strlen(str) - 1;
    char swap;

    while (premier < dernier) {
        swap = str[premier];
        str[premier] = str[dernier];
        str[dernier] = swap;
        premier++; dernier--;
    }
    return str;
}
