/*
** EPITECH PROJECT, 2022
** lib
** File description:
** lib
*/

void my_putchar(char c);

int my_putnbr(long long int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
    }
    if (nbr >= 10)
        my_putnbr(nbr / 10);
    my_putchar((nbr % 10) + 48);
    return 0;
}
