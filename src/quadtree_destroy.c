/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** quadtree_destroy.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void quadtree_destroy(quadtree_t *quad)
{
    free(quad->box);
    free(quad);
    if (quad->north_west != NULL) {
        quadtree_destroy(quad->north_west);
    }
    if (quad->north_east != NULL) {
        quadtree_destroy(quad->north_east);
    }
    if (quad->south_west != NULL) {
        quadtree_destroy(quad->south_west);
    }
    if (quad->south_east != NULL) {
        quadtree_destroy(quad->south_east);
    }
}
