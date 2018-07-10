#include "actor.hpp"


void Actor::set_v(int rl, int cl){
    
    r = rl;
    c = cl;
}

void Actor::get_E(int e1, int e2){
    
    p = e1;
    o = e2;
    
}

void Actor::get_apple(int counter){

    applec = counter;

}