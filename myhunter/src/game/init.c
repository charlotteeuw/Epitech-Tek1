/*
** EPITECH PROJECT, 2023
** $INIT
** File description:
** Initialize
*/

#include "../../include/hunter.h"

void allocate_mem(global_t *all)
{
    all->kill_counter = malloc(sizeof(texts_t));
    all->birds = malloc(sizeof(rects_t));
    all->bg = malloc(sizeof(rects_t));
    all->cursor = malloc(sizeof(object_t));
    all->bird = malloc(sizeof(object_t));
    all->button = malloc(sizeof(object_t));
    all->background = malloc(sizeof(object_t));
    all->gameover = malloc(sizeof(object_t));
    all->clock1 = malloc(sizeof(times_t));
    all->clock2 = malloc(sizeof(times_t));
    all->clock3 = malloc(sizeof(times_t));
    all->clock4 = malloc(sizeof(times_t));
    all->menu = malloc(sizeof(object_t));
    all->window = malloc(sizeof(window_t));
}

void destroy(global_t *all)
{
    sfFont_destroy(all->kill_counter->font);
    sfText_destroy(all->kill_counter->text);
    sfClock_destroy(all->clock1);
    sfClock_destroy(all->clock2);
    sfClock_destroy(all->clock3);
    sfClock_destroy(all->clock4);
    sfSprite_destroy(all->cursor->sprite);
    sfSprite_destroy(all->bird->sprite);
    sfSprite_destroy(all->button->sprite);
    sfSprite_destroy(all->background->sprite);
    sfSprite_destroy(all->gameover->sprite);
    sfSprite_destroy(all->menu->sprite);
    sfWindow_destroy(all->window->window);
    sfTexture_destroy(all->cursor->texture);
    sfTexture_destroy(all->bird->texture);
    sfTexture_destroy(all->button->texture);
    sfTexture_destroy(all->background->texture);
    sfTexture_destroy(all->gameover->texture);
    sfTexture_destroy(all->menu->texture);
}

void init(global_t *all)
{
    allocate_mem(all);
    set_window(all);
    set_cursor(all);
    set_rect_bg(all);
    set_background(all);
    set_button(all);
    set_menu(all);
    set_counter(all);
    set_rect(all);
    set_bird(all);
    set_clock1(all);
    set_clock2(all);
    set_clock3(all);
    set_clock4(all);
    set_gameover(all);
}
