/*
** EPITECH PROJECT, 2018
** BSQ solver 2
** File description:
** Bsq solver with array of pointers
*/

#include <stdlib.h>
#include "include/bsq.h"
#include "lib/include/my.h"

int square_sum(int **board, int start_i, int start_j, board_state_t state)
{
    int sum = 0;

    for (int i = state.i; i <= start_i + 1; i += 1)
        for (int j = state.j; j <= start_j + 1; j += 1)
            sum += board[i][j];
    return (sum);
}

static square_t square_calc(int **board, board_state_t state)
{
    square_t temp_square;

    temp_square.i = state.i;
    temp_square.j = state.j;
    temp_square.size = 1;
    while (square_sum(board, temp_square.i, temp_square.j, state) == 0) {
        temp_square.i += 1;
        temp_square.j += 1;
        temp_square.size += 1;
        if (temp_square.i == (state.lines - 1))
            break;
        else if (temp_square.j == (state.rows - 1))
            break;
    }
    return (temp_square);
}

int cond(int **board, board_state_t state, int size)
{
    int sum = 0;
    int count = 0;

    if (board[state.i][state.j] != 0)
        return (0);
    for (int rows = state.j; sum == 0 && rows < state.rows; rows += 1) {
        sum += board[state.i][rows];
        count += 1;
    }
    sum = 0;
    if (count > size) {
        count = 0;
        for (int lines = state.i; sum == 0 && lines < state.lines; lines += 1) {
            sum += board[lines][state.j];
            count += 1;
        }
        if (count > size)
            return (1);
    }
    return (0);
}

static int **traversal(int **board, int lines , int rows)
{
    square_t temp_square;
    square_t big_square;
    board_state_t state;

    big_square.size = 1;
    state.lines = lines;
    state.rows = rows;
    for (state.i = 0; state.i < lines - big_square.size; state.i += 1)
        for (state.j = 0; state.j < rows - big_square.size; state.j += 1)
            if (cond(board, state, big_square.size) == 1) {
                temp_square = square_calc(board, state);
                if (temp_square.size > big_square.size)
                    big_square = temp_square;
            }
    if (big_square.size == 1)
        return (first_dot(board, lines, rows));
    else
        square_filler(board, big_square);
    return (board);
}

char *bsq_solver(char *buff, int lines, int rows)
{
    int **new_board;
    int x = int_size(my_getnbr(buff, 0)) + 1;

    new_board = malloc(sizeof(*new_board) * lines);
    for (int i = 0; i < lines; i += 1)
        new_board[i] = malloc(sizeof(*new_board[i]) * (rows + 1));
    for (int i = 0; i < lines; i += 1)
        for (int j = 0; j <= rows; j += 1, x += 1)
            if (buff[x] == 'o')
                new_board[i][j] = 1;
            else if (buff[x] == '.')
                new_board[i][j] = 0;
            else if (buff[x] != '\n')
                exit (84);
    traversal(new_board, lines, rows);
    map_to_char(buff, new_board, lines, rows);
    for (int i = 0; i < lines; i += 1)
        free(new_board[i]);
    free(new_board);
    return (buff);
}
