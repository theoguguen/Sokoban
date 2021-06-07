/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** exit
*/

#include "my.h"

int find_cols(char **tab)
{
    int j = 0;

    while (tab[0][j] != '\0')
        j++;
    return j;
}

int exit_scr(char **tab, int ch, char *map)
{
    int i = 0;
    int line = word_count(map);
    int cols = find_cols(tab);

    if (ch == 27){
        clear();
        refresh();
        i = 1;
    }if (line >= LINES || cols >= COLS){
        clear();
        refresh();
        endwin();
        i = 1;
    }
    return i;
}

void is_invalid(char *map)
{
    int i = 0;

    while (map[i] != '\0'){
        if (map[i] == '#' || map[i] == 'P' || map[i] == 'O' ||
        map[i] == 'X' || map[i] == ' ' || map[i] == '\n')
            i++;
        else{
            my_putstr("Please, give a valid map\n");
            exit(84);
        }
    }
}