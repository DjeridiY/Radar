/*
** EPITECH PROJECT, 2022
** show word
** File description:
** function
*/

int my_strlen(char const *str);
int my_putstr(char *c);
int my_putchar(char c);

int my_show_word_array(char *const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
