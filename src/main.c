/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myradar-yanis.djeridi
** File description:
** main.c
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "radar.h"
#include "my.h"
#include <stdio.h>

void radar_loop(radar_t *game)
{
    check_collision(game);
    get_time(game);
    travel_finish(game);
    move_lugia(game);
    sfRenderWindow_clear(game->window, sfBlack);
    draw(game);
    sfRenderWindow_display(game->window);
}

int radar(char **av)
{
    radar_t *game = malloc(sizeof(radar_t));

    if (extract_information(game, av[1]) == 84)
        return 84;
    if (information_processing(game) == 84)
        return 84;
    calculate_angle(game);
    calculate_trajectory(game);
    set_text(game);
    while (sfRenderWindow_isOpen(game->window)) {
        analyse_event(game);
        if (game->off == game->nbr_of_lugia)
            break;
        radar_loop(game);
    }
    destroy(game);
}

int main(int ac, char **av)
{
    int recup = 0;

    if (ac == 2) {
        recup = radar(av);
        if (recup == 84) {
            my_printf("the script is not found or incorrect.\n");
            return 84;
        }
    }
    if (ac == 1) {
        my_printf("the script is not found or incorrect.\n");
        return 84;
    }
    if (ac == 2 && (my_strcmp(av[1], "-h") == 0)) {
        help_cmd();
    }
    return 0;
}
