/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** to the power of with recursivity
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        nb = 1;
        return (nb);
    }
    if (p < 0) {
        nb = 0;
        return (nb);
    }
    if (p >= 1)
        nb = nb * my_compute_power_rec(nb, p - 1);
    return (nb);
}
