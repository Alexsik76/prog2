#ifndef DOT_H
#define DOT_H
#include <string>

class Dot
{
    int x;
    int y;
    
public:
    Dot(int in_x=0, int in_y=0){
        x=in_x;
        y=in_y;
    }

    friend Dot operator-(const Dot &t, int z);
    std::string repr(){
        return "x = " + std::to_string(x) + ";" + "\ty = "+ std::to_string(y);
    }

    friend class Segment;
    friend class Trapeze;
};
#endif