/*
** EPITECH PROJECT, 2020
** B-MAT-100-RUN-1-1-101pong-benjamin.guidat
** File description:
** usage
*/
#include "my.h"

int comp(char *str1, char *str2)
{
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return 0;
    }
    return 1;
}

int usage(int ac, char *av[])
{
    if (ac == 2 && comp(av[1], "-h") == 1) {
        my_printf("\n");
        my_printf("DESCRIPTION OF THE GAME:\n");
        my_printf("\n");
        my_printf("My_Hunter is a shooting game that takes the basics of ");
        my_printf("the famous NES's game 'DUCK HUNT'.\n");
        my_printf("You play as the hunter and you have to shoot the ducks ");
        my_printf("with ");
        my_printf("your weapon, but be careful\n");
        my_printf("you must not let any ducks escape");
        my_printf(" , you will have three chances.\n");
        my_printf("\n");
        my_printf("CONTROLS:\n");
        my_printf("\n");
        my_printf("AIM   -   Move the mouse to aim.\n");
        my_printf("SHOOT -   press the mouse's button left to shoot.\n");
        my_printf("QUIT  -   click on the 'x' or press esc to quit.\n");
        my_printf("\n");
        return 1;
    }
    return 0;
}