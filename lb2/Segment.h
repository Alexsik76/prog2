#ifndef SEGMENT_H
#define SEGMENT_H
#include <cmath>
#include <iostream>
#include "Dot.h"

class Segment
{
    Dot a;
    Dot b;
public:
    Segment(Dot in_a, Dot in_b){
        a=in_a;
        b=in_b;
    };
 
    double length() {
        return sqrt(pow((b.x-a.x), 2) + pow((b.y-a.y), 2));
    }
    friend class Trapeze;
    
};
#endif