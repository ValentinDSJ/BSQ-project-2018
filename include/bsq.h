/*
** EPITECH PROJECT, 2018
** bsq.h
** File description:
** bsq header file
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <fcntl.h>

#define FILE_ERROR "file error\n"

char *bsq_solver(char *buff, int rows, int lines);
char *map_to_char(char *buff, int **board, int lines, int rows);
int **first_dot(int **board, int lines, int rows);

typedef struct square {
    int i;
    int j;
    int line;
    int row;
    int size;
} square_t;

typedef struct board_state {
    int i;
    int j;
    int lines;
    int rows;
} board_state_t;

int **square_filler(int **board, square_t big_square);

#endif
