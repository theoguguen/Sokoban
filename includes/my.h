/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** my
*/

#include <ncurses.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>

#ifndef _MY_H_
#define _MY_H_
#define UNUSED __attribute__((unused))

void my_putchar(char c);

void my_putstr(char *str);

int my_strlen(char const *str);

int my_strcmp(char *s1, char const *s2);

void help(void);

char *loadmap(char *path);

int my_sokoban(char *map);

char **my_str_to_wordtab(char *str);

char *my_strncpy(char *dest, char const *src, int n);

int word_count(char *str);

char **move_up(char **tab);

char **move_down(char **tab);

char **move_left(char **tab);

char **move_right(char **tab);

int exit_scr(char **tab, int ch, char *map);

int move_box_up(char **tab, int i, int j);

int move_box_down(char **tab, int i, int j);

int move_box_left(char **tab, int i, int j);

int move_box_right(char **tab, int i, int j);

int check_o(char **tab);

char *loadmap(char *path);

void is_invalid(char *map);

char **move_check_up(char **t, int i, int j);

char **move_check_down(char **t, int i, int j, int *s);

char **move_check_left(char **t, int i, int j);

char **move_check_right(char **t, int i, int j, int *s);

void free_tab(char **tab);

void lose_check(char **tab);

#endif
