/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** quadtree_create.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

quadtree_t* quadtree_create(float pos_x, float pos_y, float width, float heigth)
{
    quadtree_t* quad = malloc(sizeof(quadtree_t));

    quad->square.left = pos_x;
    quad->square.top = pos_y;
    quad->square.width = width;
    quad->square.height = heigth;
    quad->box = NULL;
    quad->nbr_of_objects = 0;
    quad->north_west = NULL;
    quad->north_east = NULL;
    quad->south_west = NULL;
    quad->south_east = NULL;
    return quad;
}
