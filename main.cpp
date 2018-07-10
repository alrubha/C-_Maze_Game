/*********************************************************************
 ** Program Filename: Maze
 ** Author: Ali Alrubh
 ** Date: 8/8/2016
 ** Description: Get out of the maze and beware of the swan head for 
 ** L or X
 ** Input: W, S, D, A, E, U, Q.
 ** Output: The maze with the updated player and swan location
 *********************************************************************/

#include <iostream>
#include <fstream>
#include "game.hpp"
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[]){
    
    Game f;
    int number;
    
    number = atoi(argv[1]);
    
    
    f.maze(number);
    

    
	return 0;

}
