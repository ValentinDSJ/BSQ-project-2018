/*
** EPITECH PROJECT, 2018
** non print to oct
** File description:
** Convert non printable char to octal base
*/

#include "include/my.h"

void non_print_to_oct(char *string)
{
    int num = 3;

    for (int x = 0; x < my_strlen(string); x += 1) {
        if (string[x] < 32 || string[x] >= 127) {
            my_putchar('\\');
            num -= int_size(string[x]);
            while (num > 0) {
                my_putchar('0');
                num -= 1;
            }
            base(string[x], 8);
        }
        else
            my_putchar(string[x]);
    }
}
