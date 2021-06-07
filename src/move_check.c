/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** move_check
*/

#include "my.h"

char **move_check_up(char **t, int i, int j)
{
    if (t[i][j] == 'P' && t[i - 1][j] != '#' && t[i - 1][j] != 'O'){
        if (move_box_up(t, i - 1, j) == 0){
            t[i - 1][j] = 'P';
            t[i][j] = ' ';
            return t;
        }
    }return t;
}

char **move_check_down(char **t, int i, int j, int *s)
{
    if (t[i][j] == 'P' && t[i + 1][j] != '#' && t[i + 1][j] != 'O'){
        if (move_box_down(t, i + 1, j) == 0){
            t[i + 1][j] = 'P';
            t[i][j] = ' ';
            *s = 1;
            return t;
        }
    }return t;
}

char **move_check_left(char **t, int i, int j)
{
    if (t[i][j] == 'P' && t[i][j - 1] != '#' && t[i][j - 1] != 'O'){
        if (move_box_left(t, i, j - 1) == 0){
            t[i][j - 1] = 'P';
            t[i][j] = ' ';
            return t;
        }
    }return t;
}

char **move_check_right(char **t, int i, int j, int *s)
{
    if (t[i][j] == 'P' && t[i][j + 1] != '#' && t[i][j + 1] != 'O'){
        if (move_box_right(t, i, j + 1) == 0){
            t[i][j + 1] = 'P';
            t[i][j] = ' ';
            *s = 1;
            return t;
        }
    }return t;
}