#include "game.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <time.h>
#include "player.hpp"
#include "actor.hpp"
#include "swan.hpp"

using namespace std;



Game::Game(){

    srand(time(NULL));
    
    floornum = 0;
    
}

/*********************************************************************
 ** Function: delete
 ** Description: delete the array
 *********************************************************************/

void Game::delete_f(){

    for(int y = 0; y < row; y++)
        delete [] floor[y];
    delete [] floor;

}

/*********************************************************************
 ** Function: print
 ** Description: print the array
 *********************************************************************/

void Game::print_f(){

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            
            cout << floor[i][j];
        }
    }
    cout << endl;
}

/*********************************************************************
 ** Function: create
 ** Description: create a 2D array to save the floor
 *********************************************************************/

void Game::create_f(){
    
    floor = new char*[row];
    for(int x = 0; x < row; x++){
        floor[x] = new char[col];
    }
}

/*********************************************************************
 ** Function: setname
 ** Description: set the name of the floor
 *********************************************************************/

void Game::setname(int num){

    if (num == 1){
    
        strcpy(name,"floor");
        strcat(name, "_");
        strcat(name,"1");
        strcat(name,".txt");
        
    
    
    }
    else if (num == 2){
        
        strcpy(name,"floor");
        strcat(name, "_");
        strcat(name,"2");
        strcat(name,".txt");
        
    }
    
    else {
    
        strcpy(name,"floor");
        strcat(name, "_");
        strcat(name,"3");
        strcat(name,".txt");
    
    }

}

/*********************************************************************
 ** Function: set_f1
 ** Description: read the file and save it to 2D array
 *********************************************************************/

void Game::set_f1(){
    
    ifstream file(name);

    if(file.is_open()){
    
    
        file >> row;
        file >> col;
        
        create_f();
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                
                file.get(ch);
                floor[i][j] = ch;
            }
        }
    }
    
    file.close();
    
    print_f();
}

/*********************************************************************
 ** Function: loop
 ** Description: loop through the array and update the swan and player
 ** postions after every move
 *********************************************************************/

void Game::loop(){

    char com;
    int q = 0;          // to quit the game
    int l = 0, m = 0;   // location to spawn a swan l for row, , for column
    int o = 1;          // for the swan spawn loop
    int v = 0, b = 0;   // Location of E
    int t = 0, r = 0;   // Location of L or X
    int counta = 0;
    
    Player p;
    Swan s;

    setname(floornum);
    set_f1();
    
    /* Take E location*/
    
    for(int x = 0; x < row; x++){
        for(int y = 0; y < col; y++){
        
            if(floor[x][y] == 'E'){
            
                v = x;
                b = y;
                
            }
        }
    }
    
    /* Take L and X location */
    
    for(int x = 0; x < row; x++){
        for(int y = 0; y < col; y++){
            
            if(floor[x][y] == 'L'|| floor[x][y] == 'X'){
                
                t = x;
                r = y;
                
            }
        }
    }

    
    p.get_E(v, b);
    s.get_E(v,b);
    
    /* Game is here */
    
    while(q == 0){
        
        /* Take command */
        
        cout << "Enter a command: " << endl;
        cin >> com;
        
        if (com == 'W' || com == 'w' || com == 'S' || com == 's'||com == 'D' || com == 'd'||com == 'A' || com == 'a'||com == 'U' || com == 'u' || com == 'E' || com == 'e'){
            
        if(com == 'q'){
        
            q++;
        
        }
        
        /* Eat an apple */
        
        if(com == 'e' || com == 'E'){
            
            if(p.apple > 0){
            counta = 16;
                p.apple--;
            }
     
        }
        
        /* Go up a floor */
        
        if(com == 'u' || com == 'U'){
            
            if(floor[t][r] == 'P'){
                
                floornum = 0;

                break;
            
            }
        }
        
        /* Take the player location everytime the loop repeat */
        
        for (int i = 0; i < row ; i++){
            
            for(int j = 0; j < col; j++){
                
                if(floor[i][j] == 'P'){
                    
                    p.set_v(i, j);
                    
                }
            }
        }
        
        /* Move the player */
        
        p.move(floor, com);
        
        /* Apple counter*/
        
        if(counta > 0){
            
            p.get_apple(counta);
            s.get_apple(counta);
            
            counta--;
            
        }
        
        /* swan spawn code */
        
        if(p.counter == 30){
            
            o--;
            
            p.counter = 0;
            
            while(o == 0){
                
            l = rand()% row + 1;
            m = rand()% col + 1;
            
            if(floor[l][m] == ' '){
            
            floor[l][m] = 'S';
                
                o++;
                
                    }
            else {
            }
                
                }
            }
        
        /* Take the postion of each swan and move it */
        
        for (int i = 0; i < row ; i++){
            
            for(int j = 0; j < col; j++){
                
                if(floor[i][j] == 'S'){
                    
                        s.set_v(i, j);
                        s.move(floor, com);

                    
                }
            }
        }
        
                print_f();
        
        
        cout << "Keys: " << p.key << " " << "Apples: " << p.apple << endl;
        cout << "Number of steps is: " << p.counter << endl;
        cout << "Apple's effect: " << counta << endl;
            
        }
        
        else {
        
            cout << "Wrong command" << endl;
        
        }
    
    }
    
    delete_f();
    
    
}

/*********************************************************************
 ** Function: maze
 ** Description: Organize the game with the number of floors the 
 ** player choose.
 *********************************************************************/

void Game::maze(int num){
    
    if(num == 3){
        
        floornum++;
        
        loop();
        
        floornum = 2;
        
        loop();
        
        floornum = 3;
        
        loop();
        
        cout << "You won !" << endl;

    }
    
    else if(num == 2){
        
        floornum++;
        
        loop();
        
        floornum = 2;
        
        loop();
        
        cout << "You won !" << endl;
        
    }

    else {
    
        floornum++;
        
        loop();
    
        cout << "You won !" << endl;
    }

}






