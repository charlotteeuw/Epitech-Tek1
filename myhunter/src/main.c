/*
** EPITECH PROJECT, 2023
** $MAIN
** File description:
** Main for my_hunter
*/

#include "../include/hunter.h"

void move_sprite(global_t *global)
{
    global->clock1->time = sfClock_getElapsedTime(global->clock1->clock);
    global->clock1->seconds = global->clock1->time.microseconds / 1000000.0;
    if (global->clock1->seconds > 0.03) {
        global->bg->rect.left += 1920;
        if (global->bg->rect.left >= 7680) {
            global->bg->rect.left = 0;
            global->bg->rect.top += 1080;
        }
        if (global->bg->rect.top >= 8640)
            global->bg->rect.top = 0;
        global->menu->texture =
    sfTexture_createFromFile("./content/spritesheet.png",
    &global->bg->rect);
        sfSprite_setTexture(global->menu->sprite,
    global->menu->texture, sfTrue);
        sfClock_restart(global->clock1->clock);
    }
}

void draw_sprite(global_t *global)
{
    global->clock2->time = sfClock_getElapsedTime(global->clock2->clock);
    global->clock2->seconds = global->clock2->time.microseconds / 1000000.0;
    if (global->clock2->seconds > 0.03) {
        sfRenderWindow_clear(global->window->window, sfWhite);
        sfRenderWindow_drawSprite(global->window->window,
        global->menu->sprite, NULL);
        sfRenderWindow_drawSprite(global->window->window,
        global->button->sprite, NULL);
        sfRenderWindow_display(global->window->window);
        sfClock_restart(global->clock2->clock);
    }
}

void if_click(global_t *global, sfFloatRect bound2,
    sfEvent *event, int *window_game)
{
    while (sfRenderWindow_pollEvent(global->window->window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(global->window->window);
        if (sfFloatRect_contains(&bound2, global->mouse.x, global->mouse.y)
    && event->type == sfEvtMouseButtonPressed)
            *window_game = 1;
    }
}

void game_menu(global_t *global)
{
    sfEvent *event = malloc(sizeof(sfEvent));
    sfFloatRect bound2;
    sfMusic *music = sfMusic_createFromFile("./content/doki.ogg");
    int window_game = 0;

    sfMusic_play(music);
    while (sfRenderWindow_isOpen(global->window->window)) {
        sfMusic_setLoop(music, sfTrue);
        if (window_game == 0) {
            move_sprite(global);
            draw_sprite(global);
        }
        global->mouse = sfMouse_getPosition(global->window->window);
        bound2 = sfSprite_getGlobalBounds(global->button->sprite);
        if_click(global, bound2, event, &window_game);
        if (window_game == 1)
            game_window(global, event);
    }
    sfMusic_destroy(music);
    free(event);
}

int main(int argc, char **argv)
{
    global_t *global = malloc(sizeof(global_t));

    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h')
        information();
    if (argc == 1) {
        init(global);
        game_menu(global);
        destroy(global);
    }
    free(global);
    return 0;
}
