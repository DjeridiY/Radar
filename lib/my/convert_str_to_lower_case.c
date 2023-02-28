/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-myls-yanis.djeridi
** File description:
** main.c
*/

char *convert_lower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}
