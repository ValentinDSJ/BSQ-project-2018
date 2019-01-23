/*
** EPITECH PROJECT, 2018
** My_printf
** File description:
** personal printf
*/

#include <stdarg.h>
#include "include/my.h"

static void other_flags(int index, char *string, va_list arg)
{
    unsigned int nb;
    long address;

    if (string[index] == 'b') {
        nb = va_arg(arg, unsigned int);
        base(nb, 2);
    } else if (string[index] == 'o') {
        nb = va_arg(arg, unsigned int);
        base(nb, 8);
    }
    if (string[index] == 'x' || string[index] == 'X') {
        nb = va_arg(arg, unsigned int);
        base(nb, 16);
    } else if (string[index] == 'S')
        non_print_to_oct(va_arg(arg, char*));
    if (string[index] == 'p') {
        my_putstr("0x");
        address = (long) va_arg(arg, void*);
        base(address, 16);
    }
}

static void printer(int index, char *string, va_list arg)
{
    if (string[index] == 'c')
        my_putchar(va_arg(arg, int));
    if (string[index] == 's')
        my_putstr(va_arg(arg, char*));
    if (string[index] == 'd' || string[index] == 'i')
        my_put_nbr(va_arg(arg, int));
    if (string[index] == 'l')
        my_put_nbr(va_arg(arg, long));
    if (string[index] == 'u')
        my_put_unbr(va_arg(arg, unsigned int));
    if (string[index] == '%')
        my_putchar('%');
    other_flags(index, string, arg);
}

static int format_modifiers(int index, char *string, va_list arg)
{
    int modifier = 0;
    int skip = 0;

    if (string[index] == '#') {
        my_putchar('0');
        skip += 1;
    } else if (my_cinum(string[index]))
        modifier = my_getnbr(string, index);
    if (string[index] == '0') {
        for (int x = 0; x < modifier; x += 1)
            my_putchar('0');
        modifier *= 10;
    } else
        for (int x = 0; x < modifier; x += 1)
            my_putchar(' ');
    skip += int_size(modifier);
    printer(index + skip, string, arg);
    return (skip);
}

int my_printf(char *str, ...)
{
    va_list arg;
    int y = 0;

    va_start(arg, str);
    for (int x = 0; x < my_strlen(str); x += 1) {
        if (str[x] != '%')
            my_putchar(str[x]);
        else {
            y = format_modifiers(x + 1, str, arg);
            x += 1 + y;
        }
    }
    va_end(arg);
    return (0);
}
