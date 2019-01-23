/*
** EPITECH PROJECT, 2018
** Putstr
** File description:
** Put string
*/

#include "include/my.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
