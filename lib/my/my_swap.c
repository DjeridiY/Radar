/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swap the content of two integers
*/

void my_swap(int *a, int *b)
{
    int stock;

    stock = *a;
    *a = *b;
    *b = stock;
}
