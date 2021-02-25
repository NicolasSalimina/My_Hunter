/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy
** File description:
** animate
*/
#include "my.h"


void animation(params_t *param, sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float mili_second = sfTime_asMilliseconds(time);

    if (90 < mili_second) {
        param->assets[1].rect.left += 110;
        if (param->assets[1].rect.left >= 330)
            param->assets[1].rect.left = 0;
    sfClock_restart(clock);
    }
}

void speed_management(params_t *param)
{
    param->speed -= 10;
    if (param->speed < 2) {
        param->speed = 2;
    }
}

int position(params_t *param, sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float mili_second = sfTime_asMilliseconds(time);

    if (1 < mili_second) {
        param->assets[1].pos.x += 2 + param->speed;
        if (param->assets[1].pos.x > 1250) {
            param->assets[1].pos.x = -100;
            param->count += 1;
            param->game_over += 1;
        if (param->count += 1)
            speed_management(param);
        param->assets[1].pos.y = rand() % 500;
    }
        if (param->game_over == 3) {
            my_printf("Your score : %d\n", param->score);
            my_printf("GAME OVER\n");
            return 1;
        }
        sfClock_restart(clock);
    }
    return 0;
}

void animate(params_t *param, sfClock *clock, sfClock *clock2)
{
    if (position(param, clock) == 1)
        close_window(param->window);
    animation(param, clock2);
    mouse_click(param);
    sfSprite_setTextureRect(param->assets[1].sprite, param->assets[1].rect);
    sfSprite_setPosition(param->assets[1].sprite, param->assets[1].pos);
    return;
}