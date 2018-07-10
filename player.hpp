#ifndef player_hpp
#define player_hpp

#include "actor.hpp"
#include "game.hpp"

class Player : public Actor {


public:
   
    int key;                // number of keys
    int apple;              // number of apples
    int counter;            // count the player steps

    
public:
    
    
    Player();
    
    void move(char **arr, char command);
};


#endif /* player_hpp */
