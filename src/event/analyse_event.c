/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** analyse_event
*/
#include "my.h"

void analyse_events(sfRenderWindow *window, sfEvent event)
{
        while (sfRenderWindow_pollEvent(window, &event)) {
                if (event.type == sfEvtClosed
                || event.key.code == sfKeyEscape )
                        close_window(window);
        }
}