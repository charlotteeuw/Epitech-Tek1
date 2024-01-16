/*
** EPITECH PROJECT, 2023
** $IN_GAME
** File description:
** Function to hsow game window
*/

#include "../include/hunter.h"

void set_bird(global_t *all)
{
    all->bird->texture =
    sfTexture_createFromFile("./content/bird_spritesheet.png", NULL);
    all->bird->sprite = sfSprite_create();
    all->bird->position = (sfVector2f){100, 300};
    all->bird->scale = (sfVector2f){1, 1};
    all->bird->origin = (sfVector2f){50, 50};
    all->bird->offset = (sfVector2f){10, 0};
    sfSprite_setScale(all->bird->sprite, all->bird->scale);
    sfSprite_setPosition(all->bird->sprite, all->bird->position);
    sfSprite_setOrigin(all->bird->sprite, all->bird->origin);
    sfSprite_setTexture(all->bird->sprite, all->bird->texture, sfTrue);
    sfSprite_setTextureRect(all->bird->sprite, all->birds->rect);
    all->failed_kill = 0;
}

void set_menu(global_t *all)
{
    all->menu->texture =
    sfTexture_createFromFile("./content/spritesheet.png", &all->bg);
    all->menu->sprite = sfSprite_create();
    all->menu->scale = (sfVector2f){1, 1};
    sfSprite_setTexture(all->menu->sprite, all->menu->texture, sfTrue);
    sfSprite_setScale(all->menu->sprite, all->menu->scale);
}

void set_gameover(global_t *all)
{
    all->gameover->texture =
    sfTexture_createFromFile("./content/gameover.jpg", NULL);
    all->gameover->sprite = sfSprite_create();
    all->gameover->scale = (sfVector2f){3.3, 3.3};
    sfSprite_setTexture(all->gameover->sprite, all->gameover->texture, sfTrue);
    sfSprite_setScale(all->gameover->sprite, all->gameover->scale);
}

void set_button(global_t *all)
{
    all->button->texture =
    sfTexture_createFromFile("./content/button.png", NULL);
    all->button->sprite = sfSprite_create();
    all->button->scale = (sfVector2f){0.3, 0.3};
    all->button->position = (sfVector2f){720, 460};
    sfSprite_setTexture(all->button->sprite, all->button->texture, sfTrue);
    sfSprite_setScale(all->button->sprite, all->button->scale);
    sfSprite_setPosition(all->button->sprite, all->button->position);
}

void set_background(global_t *all)
{
    all->background->texture =
    sfTexture_createFromFile("./content/fall.jpg", NULL);
    all->background->sprite = sfSprite_create();
    all->background->scale = (sfVector2f){2.5, 2.5};
    sfSprite_setTexture(all->background->sprite,
    all->background->texture, sfTrue);
    sfSprite_setScale(all->background->sprite, all->background->scale);
}
