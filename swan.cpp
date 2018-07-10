#include "swan.hpp"
#include "game.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

Swan::Swan(){

    srand(time(NULL));
     num = 0;


}

/*********************************************************************
 ** Function: move
 ** Description: move the swan on the maze
 ** Parameters: Floor array, command (will not be used)
 *********************************************************************/

void Swan::move(char **arr, char command){
    
     num = rand()% 4 + 1;
    
    if (num == 4){
        
        if(arr[r-1][c] == '#'||arr[r-1][c] == 'E'||arr[r-1][c] == 'D'){
        }
        
        else if(arr[r-1][c] == 'A'||arr[r-1][c] == 'K'){
        }

        else if(arr[r-1][c] == 'L'||arr[r-1][c] == 'X'){
        }
        
        /* if swan and player meet */
        
        else if(arr[r-1][c] == 'P'){
            
            if(applec > 0){
            
            }
        
            else {
            
        arr[p][o] = 'P';
        arr[r-1][c] = arr[r][c];
        arr[r][c] = ' ';
            
            }
        }
        
        else {
            
            arr[r-1][c] = arr[r][c];
            arr[r][c] = ' ';
        }
    }
    
    else if (num == 3){
        
        if(arr[r+1][c] == '#'||arr[r+1][c] == 'E'||arr[r+1][c] == 'D'){
        }
        
        else if(arr[r+1][c] == 'A'||arr[r+1][c] == 'K'){
        }
        
        else if(arr[r+1][c] == 'L'||arr[r+1][c] == 'X'){
        }
        
        else if(arr[r+1][c] == 'P'){
            
            if(applec > 0){
                
            }
            
            else {
                
            arr[p][o] = 'P';
            arr[r+1][c] = arr[r][c];
            arr[r][c] = ' ';
                
            }
            
        }

        else{
            
            arr[r+1][c] = arr[r][c];
            arr[r][c] = ' ';
            
        }
    }
    
    else if (num == 2){
        
        if(arr[r][c+1] == '#'||arr[r][c+1] == 'E'||arr[r][c+1] == 'D'){
        }
        
        else if(arr[r][c+1] == 'A'||arr[r][c+1] == 'K'){
        }
        
        else if(arr[r][c+1] == 'L'||arr[r][c+1] == 'X'){
        }
        
        else if(arr[r][c+1] == 'P'){
            
            if(applec > 0){
                
            }
            
            else{
            
            arr[p][o] = 'P';
            arr[r][c+1] = arr[r][c];
            arr[r][c] = ' ';
                
            }
            
        }
        
        else {
            
            arr[r][c+1] = arr[r][c];
            arr[r][c] = ' ';
            
        }
    }
    
    else if (num == 1){
        
        if(arr[r][c-1] == '#'||arr[r][c-1] == 'E'||arr[r][c-1] == 'D'){
        }
        
        else if(arr[r][c-1] == 'A'||arr[r][c-1] == 'K'){
        }
        
        else if(arr[r][c-1] == 'L'||arr[r][c-1] == 'X'){
        }
        
        else if(arr[r][c-1] == 'P'){
            
            if(applec > 0){
                
            }
            
            else{
            
            arr[p][o] = 'P';
            arr[r][c-1] = arr[r][c];
            arr[r][c] = ' ';
            
            }
        }
        
        else {
            
            arr[r][c-1] = arr[r][c];
            arr[r][c] = ' ';
        }
    }

    
}



    
    
    
    
    
