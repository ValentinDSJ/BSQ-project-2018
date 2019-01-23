/*
** EPITECH PROJECT, 2018
** Revstr
** File description:
** String reverse
*/

#include "include/my.h"

char *my_revstr(char *str)
{
    int x = 0;
    int char_counter = 0;
    char temporary;
    char *reversed = my_strdup(str);

    char_counter = (my_strlen(reversed) - 1);
    while (x < char_counter){
        temporary = str[x];
        reversed[x] = str[char_counter];
        reversed[char_counter] = temporary;
        x++;
        char_counter--;
    }
    return reversed;
}
