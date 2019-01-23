/*
** EPITECH PROJECT, 2018
** Get number
** File description:
** Convert string to number
*/

#include <stdlib.h>
#include "include/my.h"

int my_getnbr(char const *str, int from)
{
    int final = 0;
    int is_neg = 1;

    while (str[from] != '\0'){
        if (str[from] >= '0' && str[from] <= '9'){
            final = final + (str[from] - 48);
            final *= 10;
        } else
            break;
        from += 1;
    }
    final /= 10;
    final *= is_neg;
    return final;
}
