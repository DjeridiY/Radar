/*
** EPITECH PROJECT, 2022
** islower
** File description:
** islower
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
        } else
            return (0);
        i++;
    }
    return (1);
}
