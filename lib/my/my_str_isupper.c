/*
** EPITECH PROJECT, 2022
** isupper
** File description:
** isupper
*/

int my_str_isupper(char const *str)
{
        int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
        } else
            return (0);
        i++;
    }
    return (1);
}
