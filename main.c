/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-nicolas.salimina copy copy
** File description:
** main
*/
#include "my.h"

int main(int ac, char **av)
{
    usage(ac, av);
    if (usage(ac, av) == 1)
        return 0;
    params_t *param;
    param = init_params();
    window_management(param);
    destroy_assets(param);
    destroy_i(param);
    return 0;
}