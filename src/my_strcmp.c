/*
** EPITECH PROJECT, 2020
** Strcmp
** File description:
** a
*/

int my_strcmp(char *s1, char const *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}
