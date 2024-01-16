/*
** EPITECH PROJECT, 2023
** $HUNTER.H
** File description:
** hunter.h
*/

#ifndef HUNTER_H_
    #define HUNTER_H_

    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <stdio.h>
    #include <SFML/Audio.h>

typedef struct object_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfVector2f scale;
    sfVector2f origin;
    sfVector2f offset;
    sfVector2i temp;
} object_t;

typedef struct texts_s {
    sfFont *font;
    sfText *text;
    sfVector2f position;
    int counter;
    char *counter_str;
} texts_t;

typedef struct fps_s {
    sfFont *font;
    sfText *text;
    sfVector2f position;
    sfClock *clock;
    int frames;
    sfTime fps_time;
    float fps;
    char *fps_str;
    float seconds_fps;
} fps_t;

typedef struct rects_s {
    sfIntRect rect;
} rects_t;

typedef struct times_s {
    sfClock *clock;
    sfTime time;
    float seconds;
} times_t;

typedef struct window_s {
    sfVideoMode mode;
    sfRenderWindow* window;
} window_t;

typedef struct global_s {
    texts_t *kill_counter;
    rects_t *birds;
    rects_t *bg;
    object_t *cursor;
    object_t *bird;
    object_t *button;
    object_t *background;
    object_t *gameover;
    times_t *clock1;
    times_t *clock2;
    times_t *clock3;
    times_t *clock4;
    object_t *menu;
    window_t *window;
    sfVector2i mouse;
    int failed_kill;
} global_t;

void game_window(global_t *all, sfEvent *event);
void init(global_t *all);
void set_bird(global_t *all);
void set_menu(global_t *all);
void set_button(global_t *all);
void set_background(global_t *all);
void set_counter(global_t *all);
void set_cursor(global_t *all);
void set_rect(global_t *all);
void set_rect_bg(global_t *all);
void set_clock1(global_t *all);
void set_clock2(global_t *all);
void set_window(global_t *all);
void move_sprite(global_t *all);
void draw_sprite(global_t *all);
void if_click(global_t *global, sfFloatRect bound2,
    sfEvent *event, int *window_game);
void game_menu(global_t *all);
void information(void);
void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);
void kill_bird(global_t *global, sfFloatRect bound,
    sfEvent *event);
void free_mem(global_t *all);

#endif
