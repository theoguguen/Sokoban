/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** help
*/

#include "my.h"

void help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap file representing the warehouse map, containing '#'");
    my_putstr(" for walls,\n");
    my_putstr("\t\t'P' for the player, 'X' for boxes and 'O' for storage");
    my_putstr("locations.\n");
}