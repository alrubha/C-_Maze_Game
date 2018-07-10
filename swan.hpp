#ifndef swan_hpp
#define swan_hpp

#include "actor.hpp"
#include "game.hpp"



class Swan : public Actor {

private:

    int num;                            //random number will be generated to determine the swan movements
    
public:
    
    Swan();
    
    void move(char **arr, char command);
    
};

#endif
