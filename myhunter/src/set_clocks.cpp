/*
** EPITECH PROJECT, 2023
** $IN_GAME
** File description:
** Function to hsow game window
*/

#include "../include/hunter.h"

void set_clock1(global_t *all)
{
    all->clock1->clock = sfClock_create();
    all->clock1->time = sfClock_getElapsedTime(all->clock1->clock);
    all->clock1->seconds = all->clock1->time.microseconds / 1000000.0;
}

void set_clock2(global_t *all)
{
    all->clock2->clock = sfClock_create();
    all->clock2->time = sfClock_getElapsedTime(all->clock2->clock);
    all->clock2->seconds = all->clock2->time.microseconds / 1000000.0;
}

void set_clock3(global_t *all)
{
    all->clock3->clock = sfClock_create();
    all->clock3->time = sfClock_getElapsedTime(all->clock3->clock);
    all->clock3->seconds = all->clock3->time.microseconds / 1000000.0;
}

void set_clock4(global_t *all)
{
    all->clock4->clock = sfClock_create();
    all->clock4->time = sfClock_getElapsedTime(all->clock4->clock);
    all->clock4->seconds = all->clock4->time.microseconds / 1000000.0;
}
