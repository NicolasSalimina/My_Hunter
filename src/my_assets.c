/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** my_assets
*/
#include "my.h"

assets_t *conf_assets(params_t *param)
{
    assets_t *assets2 = param->assets;
    assets2[0].rect = conf_rect(0, 0, 1280, 769);
    assets2[0].texture = sfTexture_createFromFile("src/assets/stage.png"
                        , NULL);
    assets2[1].rect = conf_rect(0, 0, 110, 110);
    assets2[1].texture = sfTexture_createFromFile("src/assets/sheets.png"
                        , NULL);
    assets2[1].pos.x = 0;
    assets2[1].pos.y = 0;
    assets2[2].texture = sfTexture_createFromFile("src/assets/aim2.png"
                        , NULL);
    return assets2;
}

void init_assets(params_t *param)
{
    assets_t *assets2 = conf_assets(param);

    for (int i = 0; i < 3; i++) {
        assets2[i].sprite = sfSprite_create();
        sfSprite_setTexture(assets2[i].sprite, assets2[i].texture, sfTrue);
    }
    param->assets = assets2;
}

void destroy_assets(params_t *param)
{
    for (int i = 0; i < 3; i++) {
        sfTexture_destroy(param->assets[i].texture);
        sfSprite_destroy(param->assets[i].sprite);
    }
    free(param->assets);
}