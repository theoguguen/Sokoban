/*
** EPITECH PROJECT, 2021
** B-PSU-200-REN-2-1-mysokoban-theo.guguen
** File description:
** my_putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}