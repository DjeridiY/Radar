/*
** EPITECH PROJECT, 2022
** Task04
** File description:
** task04
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);
int my_putstr(char *c);
int my_putchar(char c);
int my_show_word_array(char *const *tab);

int words(const char *str, char selecteur)
{
    int count = 0;
    int i = 0;
    int len = 0;
    char last_char;

    len = my_strlen(str);
    if (len > 0) {
        last_char = str[0];
    }
    for (; i <= len; i++) {
        if ((str[i] == selecteur || str[i] == '\0') && last_char != selecteur) {
            count++;
        }
        last_char = str[i];
    }
    return count;
}

char **filling(char const *str, char **newtab, char selecteur, int word)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (k == word) {
            break;
        }
        if (str[i] == selecteur) {
            newtab[k][j] = '\0';
            k++;
            j = 0;
        } else {
            newtab[k][j] = str[i];
            j++;
        }
        i++;
    }
    newtab[k + 1] = 0;
    return (newtab);
}

char **my_str_to_word_array(char const *str, char selecteur)
{
    int i = 0;
    char **newtab = 0;
    int length = my_strlen(str);
    int word = words(str, selecteur);

    newtab = malloc(sizeof(char *) * (word + 1));
    *newtab = (char *){0};
    if (newtab == NULL)
        return NULL;
    while (i < word) {
        newtab[i] = malloc(sizeof(char) * (length + 1));
        for (int k = 0; k < length; k++) {
            newtab[i][k] = '\0';
        }
        if (newtab[i] == NULL)
            return NULL;
        i++;
    }
    newtab = filling(str, newtab, selecteur, word);
    return newtab;
}
