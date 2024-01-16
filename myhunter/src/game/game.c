/*
** EPITECH PROJECT, 2023
** $IN_GAME
** File description:
** Function to hsow game window
*/

#include "../../include/hunter.h"

void close_window(global_t *global, sfEvent *event)
{
    while (sfRenderWindow_pollEvent(global->window->window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(global->window->window);
    }
}

void game_window(global_t *global, sfEvent *event)
{
    sfFloatRect bound;

    sfRenderWindow_setMouseCursorVisible(global->window->window, sfFalse);
    move_bird(global);
    draw_bird(global);
    global->bird->position = sfSprite_getPosition(global->bird->sprite);
    global->mouse = sfMouse_getPosition(global->window->window);
    global->bird->origin.y = rand() % 970;
    if (global->bird->position.x >= 1920) {
        global->failed_kill++;
        sfSprite_setPosition(global->bird->sprite, global->bird->origin);
    }
    bound = sfSprite_getGlobalBounds(global->bird->sprite);
    kill_bird(global, bound, event);
    gameover(global);
}
