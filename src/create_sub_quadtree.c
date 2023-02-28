/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** create_sub_quadtree.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void create_sub_quatree(quadtree_t *quad)
{
    if (quad->south_west == NULL) {
        quad->south_west = quadtree_create(quad->square.left,
        quad->square.top + quad->square.height / 2, quad->square.width / 2,
        quad->square.height / 2);
    }
    if (quad->north_west == NULL) {
        quad->north_west = quadtree_create(quad->square.left, quad->square.top,
        quad->square.width / 2, quad->square.height / 2);
    }
    if (quad->north_east == NULL) {
        quad->north_east =
        quadtree_create(quad->square.left + quad->square.width / 2,
        quad->square.top, quad->square.width / 2, quad->square.height / 2);
    }
    if (quad->south_east == NULL) {
        quad->south_east = quadtree_create(quad->square.left +
        quad->square.width / 2,
        quad->square.top + quad->square.height / 2, quad->square.width / 2,
        quad->square.height / 2);
    }
}
