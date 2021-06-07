/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** main
*/

#include "my.h"

int main(int ac UNUSED, char **av)
{
    char *map;

    if (ac != 2){
        my_putstr("Error: Wrong argument.\n");
        my_putstr("Type ./my_sokoban -h for help.\n");
        return 84;
    }if (my_strcmp(av[1], "-h\0") == 0){
        help();
        return 0;
    }else{
        map = loadmap(av[1]);
        if (map != NULL)
            my_sokoban(map);
    }
    free(map);
    return 0;
}