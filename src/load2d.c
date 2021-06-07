/*
** EPITECH PROJECT, 2021
** B-CPE-110-REN-1-1-BSQ-theo.guguen
** File description:
** load2d
*/

#include "my.h"

char *loadmap(char *path)
{
    int fd = open(path, O_RDONLY);
    struct stat s;
    char *map = NULL;

    if (fd == -1){
        write(2, "Open Failed\n", 12);
        return NULL;
    }
    stat(path, &s);
    if (S_ISREG(s.st_mode)){
        map = malloc(sizeof(char) * s.st_size);
        read(fd, map, s.st_size);
        map[s.st_size + 1] = '\0';
        close(fd);
        return map;
    }else{
        my_putstr("Please, give a regular file in argument\n");
        exit(84);
    }
}

int is_end(char c)
{
    if (c <= '\n')
        return 0;
    return 1;
}

int word_count(char *str)
{
    int i = 0;
    int counter = 0;

    while (str != NULL && str[i]){
        if (is_end(str[i]) == 1 && is_end(str[i + 1]) == 0)
            counter++;
        i++;
    }
    return counter;
}

char **my_str_to_wordtab(char *str)
{
    int j = 0;
    int i = 0;
    char **tab;
    int len = 0;

    tab = malloc((word_count(str) + 1) * sizeof(char *));
    while (str != NULL && str[i]){
        if (is_end(str[i]))
            len = len + 1;
        if (is_end(str[i]) == 1 && is_end(str[i + 1]) == 0){
            tab[j] = malloc(len + 1);
            my_strncpy(tab[j], &str[i - len + 1], len);
            tab[j][len] = '\n';
            tab[j][len + 1] = '\0';
            len = 0;
            j++;
        }
        i++;
    }
    tab[j] = NULL;
    return tab;
}
