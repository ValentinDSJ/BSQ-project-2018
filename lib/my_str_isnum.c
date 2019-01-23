/*
** EPITECH PROJECT, 2018
** str is num
** File description:
** return 1 if only numbers
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9');
        else
            return (0);
        i += 1;
    }
    return (1);
}

int my_cinum(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
