/*
** EPITECH PROJECT, 2018
** print
** File description:
** print some stuff
*/

#include<unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
