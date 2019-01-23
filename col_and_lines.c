/*
** EPITECH PROJECT, 2018
** Col and lines
** File description:
** Get the number of columns and lines
*/

#include "include/bsq.h"
#include "lib/include/my.h"

int **first_dot(int **board, int lines, int rows)
{
    for (int i = 0; i < lines; i += 1)
        for (int j = 0; j < rows; j += 1)
            if (board[i][j] == 0) {
                board[i][j] = 8;
                return (board);
            }
    return (0);
}

char *map_to_char(char *buff, int **board, int lines, int rows)
{
    int x = 0;

    for (int i = 0; i < lines; i += 1) {
        for (int j = 0; j < rows; j += 1, x += 1) {
            if (board[i][j] == 0)
                buff[x] = '.';
            else if (board[i][j] == 1)
                buff[x] = 'o';
            if (board[i][j] == 8)
                buff[x] = 'x';
        }
        buff[x] = '\n';
        x += 1;
    }
    buff[x] = '\0';
    return (buff);
}

int **square_filler(int **board, square_t big_square)
{
    int x = 0;

    big_square.size -= 1;
    for (int i = big_square.i - big_square.size; i <= big_square.i; i += 1)
        for (int j = big_square.j - big_square.size; j <= big_square.j; j += 1)
            board[i][j] = 8;
    return (board);
}
