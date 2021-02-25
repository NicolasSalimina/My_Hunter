/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** my_game
*/
#include "my.h"

void window_management(params_t *param)
{
    sfEvent event;
    sfClock *clock = sfClock_create();
    sfClock *clock2 = sfClock_create();

    while (sfRenderWindow_isOpen(param->window)){
        sfRenderWindow_clear(param->window, sfBlack);
        sfRenderWindow_drawSprite(param->window, param->assets[0].sprite,
                                    NULL);
        sfRenderWindow_drawSprite(param->window, param->assets[1].sprite,
                                    NULL);
        sfRenderWindow_drawSprite(param->window, param->assets[1].sprite,
                                    NULL);
        sfRenderWindow_drawSprite(param->window, param->assets[2].sprite,
                                    NULL);
        animate(param, clock, clock2);
        sfRenderWindow_display(param->window);
        analyse_events(param->window, event);
    }
    return;
}

void destroy_i(params_t *param)
{
    sfRenderWindow_destroy(param->window);
    free(param);
}