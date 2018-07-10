#ifndef actor_hpp
#define actor_hpp

class Actor{


protected:

    int r,c;                // the postion of the actor
    int p,o;                // The location of p
    int applec;             // apple's effect counter
    
public:

    virtual void move(char **arr , char command) = 0;           // move function
    void set_v(int rl, int cl);                                 // take the location of the actor
    void get_E(int e1, int e2);                                 // take the location of E
    void get_apple(int counter);                                // apple effect counter
    
};










#endif /* actor_hpp */
