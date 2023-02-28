/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** random.c
*/

#include <stdlib.h>
#include <time.h>

int random_number(int min, int max)
{
    int number = 0;

    srand(time(NULL));
    number = rand() % (max - min + 1) + min;
    return number;
}
