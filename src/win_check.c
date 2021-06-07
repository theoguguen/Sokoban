/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** in_check
*/

#include "my.h"

int check_o(char **tab)
{
    char c = 'O';

    for (int i = 0; tab[i] != NULL; i++)
        for (int j = 0; tab[i][j] != '\0'; j++)
            if (tab[i][j] == c)
                return 1;
    return 0;
}