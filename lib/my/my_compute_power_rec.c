/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** power t
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    } else {
        result = nb * my_compute_power_rec(nb, p - 1);
    }
    return (result);
}
