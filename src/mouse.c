/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy
** File description:
** mouse
*/
#include "my.h"

sfVector2f vector(float x, float y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return pos;
}

void mouse_position(params_t *param)
{
    float x = sfMouse_getPositionRenderWindow(param->window).x;
    float y = sfMouse_getPositionRenderWindow(param->window).y;


    sfFloatRect bound = sfSprite_getGlobalBounds(param->assets[1].sprite);

    if (sfFloatRect_contains(&bound, x, y)) {
        param->assets[1].pos.x = -110;
        param->assets[1].pos.y = rand() % 500;
        param->speed += 2;
        param->score += 1;
    }
}

void mouse_click(params_t *param)
{
    float x = sfMouse_getPositionRenderWindow(param->window).x;
    float y = sfMouse_getPositionRenderWindow(param->window).y;

    sfSprite_setPosition(param->assets[2].sprite, vector(x - 20, y - 20));
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        mouse_position(param);
    }
    return;
}