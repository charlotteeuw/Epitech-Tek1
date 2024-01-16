/*
** EPITECH PROJECT, 2023
** $IN_GAME
** File description:
** Function to hsow game window
*/

#include "../include/hunter.h"

void set_counter(global_t *all)
{
    all->kill_counter->counter = 0;
    all->kill_counter->font =
    sfFont_createFromFile("./content/retro.ttf");
    all->kill_counter->text = sfText_create();
    all->kill_counter->counter_str = int_tostr(all->kill_counter->counter);
    sfText_setFont(all->kill_counter->text, all->kill_counter->font);
    sfText_setFillColor(all->kill_counter->text, sfWhite);
    all->kill_counter->position = (sfVector2f){3, 2};
    sfText_setPosition(all->kill_counter->text, all->kill_counter->position);
    sfText_setCharacterSize(all->kill_counter->text, 100);
}

void set_cursor(global_t *all)
{
    all->cursor->texture =
    sfTexture_createFromFile("./content/cross.png", NULL);
    all->cursor->sprite = sfSprite_create();
    all->cursor->temp = sfMouse_getPosition(all->window->window);
    all->cursor->position.x = all->cursor->temp.x;
    all->cursor->position.y = all->cursor->temp.y;
    all->cursor->scale = (sfVector2f){0.3, 0.3};
    sfSprite_setPosition(all->cursor->sprite, all->cursor->position);
    sfSprite_setScale(all->cursor->sprite, all->cursor->scale);
    sfSprite_setTexture(all->cursor->sprite, all->cursor->texture, sfTrue);
}

void set_rect(global_t *all)
{
    all->birds->rect;
    all->birds->rect.top = 0;
    all->birds->rect.left = 0;
    all->birds->rect.width = 110;
    all->birds->rect.height = 110;
}

void set_rect_bg(global_t *all)
{
    all->bg->rect;
    all->bg->rect.top = 0;
    all->bg->rect.left = 0;
    all->bg->rect.width = 1920;
    all->bg->rect.height = 1080;
}

void set_window(global_t *all)
{
    all->window->mode = (sfVideoMode){1920, 1080, 32};
    all->window->window = sfRenderWindow_create(all->window->mode,
    "My Hunter", sfResize | sfClose, NULL);
    sfWindow_setFramerateLimit(all->window->window, 30);
}
