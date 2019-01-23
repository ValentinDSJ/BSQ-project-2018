/*
** EPITECH PROJECT, 2018
** String Copy
** File description:
** Copy string
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}

char *my_strcpy_to(char *dest, char const *src, int to)
{
    int i = 0;

    while (src[i] != '\0'){
        dest[to] = src[i];
        i += 1;
        to += 1;
    }
    return dest;
}

char *my_strcpy_and_del(char *dest, char *src, int entry, int exit)
{
    int i = 0;

    while (entry <= exit){
        dest[i] = src[entry];
        src[entry] = ' ';
        entry += 1;
        i += 1;
    }
    dest[entry + 1] = '\0';
    return (dest);
}

char *my_strcpy_from(char *dest, char const *src, int from, int to)
{
    int i = 0;

    while (from <= to){
        dest[i] = src[from];
        from += 1;
        i += 1;
    }
    dest[from + 1] = '\0';
    return (dest);
}
