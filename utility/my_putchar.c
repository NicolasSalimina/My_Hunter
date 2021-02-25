/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** my_putchar
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
    return;
}