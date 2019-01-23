/*
** EPITECH PROJECT, 2018
** Main
** File description:
** BSQ main
*/

#include "lib/include/my.h"
#include "include/bsq.h"

int main(int ac, char **argv)
{
    int fd = open(argv[1], O_RDONLY);
    char *buff;
    int lines;
    struct stat stat;

    fstat(fd, &stat);
    if (fd == -1 || stat.st_size == 0) {
        write(1, FILE_ERROR, 11);
        return (84);
    }
    buff = malloc(sizeof(char) * stat.st_size);
    read(fd, buff, stat.st_size);
    close(fd);
    lines = my_getnbr(buff, 0);
    fd = stat.st_size - int_size(lines);
    bsq_solver(buff, lines, (fd - 2) / lines);
    write(1, buff, fd - 1);
    return (0);
}
