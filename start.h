#include <ncurses/ncurses.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

struct Pair {
    int horiz;
    int vert;
};

void enterAirportCode();
void downloadJsonFile();

// --------------------------------------------------

void print_runwayAnimation();
void print_entireRunway();
void print_eachFrame(struct Pair prevPos, struct Pair newPos);
void print_thankYou();