#include <iostream>
#include "Dot.h"
#include "Segment.h"
#include "Trapeze.h"


int main()
{
    Dot A = Dot(0,0);
    Dot B = Dot(3,4);
    Dot C = Dot(9,4);
    Dot D = Dot(12,0);
   
    Trapeze TR1 = Trapeze();
     std:: cout << "\tTR1:" << std::endl;
    TR1.repr();

    Trapeze TR2 = Trapeze(A, B, C, D);
    std:: cout << "\tTR2:" << std::endl;
    TR2.repr();

    Trapeze TR3 = TR2 - 3;
    std:: cout << "\tTR3:" << std::endl;
    TR3.repr();

    return 0;
}
