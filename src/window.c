/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** my_sokoban
*/

#include "my.h"

void print_map(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        printw(tab[i]);
}

void remap(char **tab)
{
    clear();
    print_map(tab);
    refresh();
}

void which_move(char **tab, int ch)
{
    if (ch == KEY_UP){
        move_up(tab);
        remap(tab);
    }
    if (ch == KEY_DOWN) {
        move_down(tab);
        remap(tab);
    }
    if (ch == KEY_LEFT) {
        move_left(tab);
        remap(tab);
    }
    if (ch == KEY_RIGHT) {
        move_right(tab);
        remap(tab);
    }
}

void init_screen(char **tab)
{
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
    print_map(tab);
}

int my_sokoban(char *map)
{
    char **tab = my_str_to_wordtab(map);
    int ch;

    is_invalid(map);
    initscr();
    init_screen(tab);
    while (1){
        if (check_o(tab) == 0)
            break;
        ch = wgetch(stdscr);
        if (exit_scr(tab, ch, map) == 1)
            break;
        if (ch == 32){
            tab = my_str_to_wordtab(map);
            remap(tab);
        } which_move(tab, ch);
    }
    refresh();
    endwin();
    free_tab(tab);
    return 0;
}
