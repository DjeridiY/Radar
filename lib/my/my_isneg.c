/*
** EPITECH PROJECT, 2022
** my_isneg
** File description:
** my_isneg fonction
*/

void my_putchar(char c);

int my_isneg(int number)
{
    if (number >= 0){
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
