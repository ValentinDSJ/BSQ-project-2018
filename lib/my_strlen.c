/*
** EPITECH PROJECT, 2018
** Strlen
** File description:
** Count char
*/

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
