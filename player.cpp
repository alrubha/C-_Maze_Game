#include "player.hpp"
#include "game.hpp"
#include <iostream>
using namespace std;


Player::Player(){

    key = 0;
    apple = 0;
    counter = 0;

}

/*********************************************************************
 ** Function: move
 ** Description: move the player on the maze
 ** Parameters: Floor array, command
 *********************************************************************/

void Player::move(char **arr, char command){
    
    
    if (command == 'w' || command == 'W'){
        
        if(arr[r-1][c] == '#'||arr[r-1][c] == 'E'){
        }
        
        else if(arr[r-1][c] == 'D'){
            
            if (key > 0){
                arr[r-1][c] = arr[r][c];
                arr[r][c] = ' ';
                key--;
                counter++;

            }
        }

        /* Key part */
        
        else if(arr[r-1][c] == 'K'){
            
            if(key == 3){
                
            }
            
            else {
            
                arr[r-1][c] = arr[r][c];
                arr[r][c] = ' ';
                key++;
                counter++;

            }
        }
        
        /* apple part */

        else if(arr[r-1][c] == 'A'){
            
            if(apple == 2){
                
            }
            
            else {
                
                arr[r-1][c] = arr[r][c];
                arr[r][c] = ' ';
                apple++;
                counter++;

            }
        }
        
        /* swan part */
        
        else if(arr[r-1][c] == 'S'){
            
            if(applec > 0){
            
            }
        
            else {
            arr[p][o] = arr[r][c];
            arr[r][c] = ' ';

            }
        }
        
        else {
            
            arr[r-1][c] = arr[r][c];
            arr[r][c] = ' ';
            counter++;

        }
    }
    
    else if (command == 's' || command == 'S'){
        
        if(arr[r+1][c] == '#' || arr[r+1][c] == 'E'){
            
        }
        
        else if(arr[r+1][c] == 'D'){
            
            if (key > 0){
                arr[r+1][c] = arr[r][c];
                arr[r][c] = ' ';
                key--;
                counter++;

            }
        }
        
        else if(arr[r+1][c] == 'K'){
            
            if(key == 3){
                
            }
            
            else{
                
                arr[r+1][c] = arr[r][c];
                arr[r][c] = ' ';
                key++;
                counter++;

            }
        }
        
        else if(arr[r+1][c] == 'A'){
            
            if(apple == 2){
                
            }
            
            else{
                
                arr[r+1][c] = arr[r][c];
                arr[r][c] = ' ';
                apple++;
                counter++;

                
            }
        }
        
        else if(arr[r+1][c] == 'S'){
            
            if(applec > 0){
            
            }
            
            else {
            
            arr[p][o] = arr[r][c];
            arr[r][c] = ' ';
            
            }
            
        }
        
        else{
            
            arr[r+1][c] = arr[r][c];
            arr[r][c] = ' ';
            counter++;

            
        }
    }
    
    else if (command == 'd' || command == 'D'){
        
        if(arr[r][c+1] == '#'||arr[r][c+1] == 'E'){
            
        }
        
        else if(arr[r][c+1] == 'D'){
            
            if (key > 0){
                arr[r][c+1] = arr[r][c];
                arr[r][c] = ' ';
                key--;
                counter++;

            }

        }

        
        else if(arr[r][c+1] == 'K'){
            
            if(key == 3){
                
            }
            
            else {
                
                arr[r][c+1] = arr[r][c];
                arr[r][c] = ' ';
                key++;
                counter++;
            }
        }
        
        else if(arr[r][c+1] == 'A'){
            
            if(apple == 2){
                
            }
            
            else{
                
                arr[r][c+1] = arr[r][c];
                arr[r][c] = ' ';
                apple++;
                counter++;
            }
        }
        
        else if(arr[r][c+1] == 'S'){
            
            if(applec > 0){
            }
            
            else{
                
            arr[p][o] = arr[r][c];
            arr[r][c] = ' ';
                
            }
            
        }

        else {
            
            arr[r][c+1] = arr[r][c];
            arr[r][c] = ' ';
            counter++;
            
        }
    }
    
    else if (command == 'a' || command == 'A'){
        
        if(arr[r][c-1] == '#'||arr[r][c-1] == 'E'){
        
        }
        
        else if(arr[r][c-1] == 'D'){
            
            if (key > 0){
                arr[r][c-1] = arr[r][c];
                arr[r][c] = ' ';
                key--;
                counter++;

            }
        }

        else if(arr[r][c-1] == 'K'){
            
            if(key == 3){
                
            }
            
            else {
                
                arr[r][c-1] = arr[r][c];
                arr[r][c] = ' ';
                key++;
                counter++;
                
            }
        }
        
        else if(arr[r][c-1] == 'A'){
            
            if(apple == 2){
            }
            
            else {
                
                arr[r][c-1] = arr[r][c];
                arr[r][c] = ' ';
                apple++;
                counter++;
                
            }
        }
        
        else if(arr[r][c-1] == 'S'){
            
            if(applec > 0){
            }
            
            else{
            
            arr[p][o] = arr[r][c];
            arr[r][c] = ' ';
                
            }
            
        }

        else {
            
            arr[r][c-1] = arr[r][c];
            arr[r][c] = ' ';
            counter++;
        }
    }
}