/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** my
*/
#include <stdarg.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SFML/Window.h>

#ifndef MY_H_
#define MY_H_


void analyse_events(sfRenderWindow *window, sfEvent event);
void close_window(sfRenderWindow *window);


typedef struct assets
{
    sfIntRect   rect;
    sfVector2f  pos;
    sfTexture   *texture;
    sfSprite    *sprite;
}assets_t;

typedef struct params
{
    sfRenderWindow  *window;
    assets_t        *assets;
    int             count;
    int             score;
    int             game_over;
    float            speed;
    sfClock         *clock;
}params_t;

assets_t *conf_assets(params_t *param);
void init_assets(params_t *param);
void destroy_assets(params_t *param);


params_t *init_params(void);
sfIntRect conf_rect(int top, int left, int width, int height);
void window_management(params_t *param);

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nbr);
int my_printf(char const *str, ...);
int my_printf_main(char const *str, int i, va_list list);
int my_printf_special(char const *str, int i);

void animate(params_t *param, sfClock *clock, sfClock *clock2);
void clock_a(void);
int my_rand(void);

void mouse_position(params_t *param);
void mouse_movement(params_t *param);
void mouse_click(params_t *param);

void destroy_i(params_t *param);

int usage(int ac, char *av[]);
#endif /* !MY_H_ */
