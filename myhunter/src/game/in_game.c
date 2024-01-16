/*
** EPITECH PROJECT, 2023
** $IN_GAME
** File description:
** Function to hsow game window
*/

#include "../../include/hunter.h"

void move_bird(global_t *global)
{
    global->clock3->time = sfClock_getElapsedTime(global->clock3->clock);
    global->clock3->seconds = global->clock3->time.microseconds / 1000000.0;
    if (global->clock3->seconds > 0.3) {
        global->birds->rect.left += 110;
        if (global->birds->rect.left == 330)
            global->birds->rect.left = 0;
        sfSprite_setTextureRect(global->bird->sprite, global->birds->rect);
        sfClock_restart(global->clock3->clock);
    }
    global->cursor->temp =
    sfMouse_getPositionRenderWindow(global->window->window);
    global->cursor->position.x = global->cursor->temp.x - 77;
    global->cursor->position.y = global->cursor->temp.y - 77;
    sfSprite_setPosition(global->cursor->sprite, global->cursor->position);
}

void draw_bird(global_t *global)
{
    global->clock4->time = sfClock_getElapsedTime(global->clock4->clock);
    global->clock4->seconds = global->clock4->time.microseconds / 1000000.0;
    if (global->clock4->seconds > 0.03) {
        sfRenderWindow_clear(global->window->window, sfBlack);
        sfSprite_move(global->bird->sprite, global->bird->offset);
        sfRenderWindow_drawSprite(global->window->window,
        global->background->sprite, NULL);
        sfRenderWindow_drawSprite(global->window->window,
        global->bird->sprite, NULL);
        sfRenderWindow_drawSprite(global->window->window,
        global->cursor->sprite, NULL);
        sfText_setString(global->kill_counter->text,
        global->kill_counter->counter_str);
        sfRenderWindow_drawText(global->window->window,
        global->kill_counter->text, NULL);
        sfRenderWindow_display(global->window->window);
        sfClock_restart(global->clock4->clock);
    }
}

void kill_bird(global_t *global, sfFloatRect bound, sfEvent *event)
{
    if (sfFloatRect_contains(&bound, global->mouse.x, global->mouse.y)
    && event->type == sfEvtMouseButtonPressed) {
        sfSprite_setPosition(global->bird->sprite, global->bird->origin);
        global->kill_counter->counter++;
        global->kill_counter->counter_str =
    int_tostr(global->kill_counter->counter);
        sfText_setString(global->kill_counter->text,
    global->kill_counter->counter_str);
        global->bird->offset.x = rand() % 30 + 20;
    }
}

void gameover(global_t *global)
{
    if (global->failed_kill >= 4) {
        sfRenderWindow_drawSprite(global->window->window,
        global->gameover->sprite, NULL);
        sfRenderWindow_display(global->window->window);
        sfSleep((sfTime){5000000});
        sfRenderWindow_close(global->window->window);
    }
}
