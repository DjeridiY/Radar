/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** create_checker.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"

checker_t *create_checker(checker_t *checker)
{
    checker->size = (sfVector2f) {20, 20};
    return checker;
}
