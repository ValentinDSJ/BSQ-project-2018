/*
** EPITECH PROJECT, 2018
** Strdup
** File description:
** string duplicate
*/

#include <stdlib.h>
#include "include/my.h"

char *my_strdup(const char *str)
{
    int length = my_strlen(str);
    char *new;

    new = malloc(sizeof(char) * length + 5);
    my_strcpy(new, str);
    new[length] = '\0';
    return (new);
}
