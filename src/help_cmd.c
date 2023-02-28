/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** help_cmd.c
*/

#include "my.h"

void help_cmd(void)
{
    my_printf("Air traffic simulation panel\n\n");
    my_printf("USAGE\n");
    my_printf(" ./my_radar [OPTIONS] path_to_script\n");
    my_printf("  path_to_script     The path to the script file.\n\n");
    my_printf("OPTIONS\n");
    my_printf(" -h                print the usage and quit.\n\n");
    my_printf("USER INTERACTIONS\n");
    my_printf(" 'L' key        enable/disable hitboxes and areas.\n");
    my_printf(" 'S' key        enable/disable sprites.\n");
}
