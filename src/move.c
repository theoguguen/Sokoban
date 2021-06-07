/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** move
*/

#include "my.h"

char **move_up(char **t)
{
    for (int i = 0; t[i] != NULL; i++){
        for (int j = 0; t[i][j] != '\0'; j++)
            move_check_up(t, i, j);
    }
    return t;
}

char **move_down(char **t)
{
    int s = 0;

    for (int i = 0; t[i] != NULL; i++){
        for (int j = 0; t[i][j] != '\0'; j++){
            move_check_down(t, i, j, &s);
            if (s == 1)
                return t;
        }
    }
    return t;
}

char **move_left(char **t)
{
    for (int i = 0; t[i] != NULL; i++){
        for (int j = 0; t[i][j] != '\0'; j++)
            move_check_left(t, i, j);
    }
    return t;
}

char **move_right(char **t)
{
    int s = 0;

    for (int i = 0; t[i] != NULL; i++){
        for (int j = 0; t[i][j] != '\0'; j++){
            move_check_right(t, i, j, &s);
            if (s == 1)
                return t;
        }
    }
    return t;
}