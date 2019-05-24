#ifndef _GAME_H_
# define _GAME_H_

# include <unistd.h>
# include <ncurses.h>
# include <iostream>
# include <string>

typedef struct {
    uint_fast8_t x;
    uint_fast8_t y;
} vec2ui;

typedef struct {
    int_fast8_t x;
    int_fast8_t y;
} vec2i;

int  init(void);
void run(void);
void close(void);

#endif