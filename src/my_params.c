/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** my_params
*/
#include "my.h"

assets_t *init_assets_struct(void)
{
    assets_t *assets2 = malloc(sizeof(assets_t) * 4);

    assets2->texture = NULL;
    assets2->sprite = NULL;
    return assets2;
}

params_t *init_params(void)
{
    params_t *param = malloc(sizeof(params_t));
    sfVideoMode video = {1280, 769, 32};
    char *title = "My_hunter";

    param->window = sfRenderWindow_create(video, title, sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(param->window, 60);
    sfRenderWindow_setMouseCursorVisible(param->window, sfFalse);
    param->assets = init_assets_struct();
    init_assets(param);
    return param;
}

sfIntRect conf_rect(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.height = height;
    rect.left = left;
    rect.top = top;
    rect.width = width;

    return rect;
}