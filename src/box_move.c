/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** box_move
*/

int move_box_up(char **tab, int i, int j)
{
    if (tab[i][j] == 'X' && tab[i - 1][j] != '#' && tab[i - 1][j] != 'X'){
        tab[i][j] = ' ';
        tab[i - 1][j] = 'X';
        return 0;
    }if (tab[i + 1][j] == 'P' && tab[i - 1][j] == '#' && tab[i][j] == 'X')
        return 1;
    if (tab[i + 1][j] == 'P' && tab[i - 1][j] == 'X' && tab[i][j] == 'X')
        return 1;
    return 0;
}

int move_box_down(char **tab, int i, int j)
{
    if (tab[i][j] == 'X' && tab[i + 1][j] != '#' && tab[i + 1][j] != 'X'){
        tab[i][j] = ' ';
        tab[i + 1][j] = 'X';
        return 0;
    }if (tab[i - 1][j] == 'P' && tab[i + 1][j] == '#' && tab[i][j] == 'X')
        return 1;
    if (tab[i - 1][j] == 'P' && tab[i + 1][j] == 'X' && tab[i][j] == 'X')
        return 1;
    return 0;
}

int move_box_left(char **tab, int i, int j)
{
    if (tab[i][j] == 'X' && tab[i][j - 1] != '#' && tab[i][j - 1] != 'X'){
        tab[i][j] = ' ';
        tab[i][j - 1] = 'X';
        return 0;
    }if (tab[i][j + 1] == 'P' && tab[i][j - 1] == '#' && tab[i][j] == 'X')
        return 1;
    if (tab[i][j + 1] == 'P' && tab[i][j - 1] == 'X' && tab[i][j] == 'X')
        return 1;
    return 0;
}

int move_box_right(char **tab, int i, int j)
{
    if (tab[i][j] == 'X' && tab[i][j + 1] != '#' && tab[i][j + 1] != 'X'){
        tab[i][j] = ' ';
        tab[i][j + 1] = 'X';
        return 0;
    }if (tab[i][j - 1] == 'P' && tab[i][j + 1] == '#' && tab[i][j] == 'X')
        return 1;
    if (tab[i][j - 1] == 'P' && tab[i][j + 1] == 'X' && tab[i][j] == 'X')
        return 1;
    return 0;
}