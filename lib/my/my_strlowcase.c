/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** capitalize
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
