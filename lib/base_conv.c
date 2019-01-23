/*
** EPITECH PROJECT, 2018
** Base conv
** File description:
** Convert into selected base
*/

#include "include/my.h"
#include <stdlib.h>

int hex(unsigned int nb)
{
    if (nb > 9)
        return (nb + 39);
    return (nb);
}

void base(long nb, int base)
{
    long nb2 = nb;
    char *nbr = malloc(sizeof(long) * int_size(nb));
    int x;

    for (x = 0; nb2 > 0; x += 1) {
        nb = nb2 % base;
        if (base == 16)
            nb = hex(nb);
        nbr[x] = nb + 48;
        nb2 = nb2 / base;
    }
    nbr[x] = '\0';
    my_putstr(my_revstr(nbr));
}
