#include <iostream>
#include "Dot.h"
#include "Segment.h"
#include "Diamond.h"


int main()
{
    Dot A = Dot(0,0);
    Dot B = Dot(0,3);
    Dot C = Dot(3,3);
    Dot D = Dot(3,0);
   
    Diamond di = Diamond(A, B, C, D);
     std:: cout << "\tDiamond:" << std::endl;
    di.repr();
    
    
    return 0;
}
