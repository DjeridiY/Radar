/*
** EPITECH PROJECT, 2022
** Radar
** File description:
** string_to_int.c
*/

int string_to_int(char *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            return res;
        }
        res = res * 10 + str[i] - '0';
    }
    return res;
}
