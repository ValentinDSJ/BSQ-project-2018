/*
** EPITECH PROJECT, 2018
** Put nbr
** File description:
** Put nbr prolly
*/

#include "include/my.h"
#include <stdlib.h>

int my_put_nbr(long nb)
{
    long mod_number = 10;
    int y;

    if (nb < 0){
        my_putchar(45);
        nb = nb * -1;
    }
    while (nb % mod_number != nb){
        mod_number *= 10;
    }
    for (long x = mod_number; x >= 10; x = x / 10){
        y = (nb % x) / (x / 10) + 48;
        my_putchar(y);
    }
    return (0);
}

int my_put_unbr(unsigned int nb)
{
    long mod_number = 10;
    int y;

    while (nb % mod_number != nb){
        mod_number *= 10;
    }
    for (long x = mod_number; x >= 10; x = x / 10){
        y = (nb % x) / (x / 10) + 48;
        my_putchar(y);
    }
    return (0);
}
