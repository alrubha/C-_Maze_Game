#ifndef GAME_HPP_
#define GAME_HPP_

#include <iostream>
#include <fstream>
#include "player.hpp"
#include <string.h>

using namespace std;


class Game{

private:

int row;
int col;
char ch;
char **floor;
char name[4];
int floornum;

    
public:

    Game();
    
void create_f();                // create the array that will hold the floor
void delete_f();                // delete the 2d array
void print_f();                 // print the floor
void set_f1();                  // read the floor from .txt
    
void setname(int num);          // set the name of floor
void loop();                    // game loop
void maze(int num);             // organize game

    
};

#endif
