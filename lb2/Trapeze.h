#ifndef TRAPEZE_H
#define TRAPEZE_H
#include "Dot.h"
#include "Segment.h"

class Trapeze
{
    Dot d_a;
    Dot d_b;
    Dot d_c;
    Dot d_d;
    
public:
    Trapeze(Dot in_a, Dot in_b, Dot in_c, Dot in_d){
        d_a=in_a;
        d_b=in_b;
        d_c=in_c;
        d_d=in_d;
    };
    Trapeze(){
        d_a=Dot();
        d_b=Dot(1,3);
        d_c=Dot(4,3);
        d_d=Dot(5,0);
    };

    friend Trapeze operator-(const Trapeze &t, int z);
 
    double get_perimeter() {
        Segment s_a = Segment(d_a, d_b);
        Segment s_b = Segment(d_b, d_c);
        Segment s_c = Segment(d_c, d_d);
        Segment s_d = Segment(d_d, d_a);
        return s_a.length() + s_b.length() + s_c.length() + s_d.length();
    }
    double get_area() {
        double p = (this->get_perimeter())/2;
        Segment s_a = Segment(d_a, d_d);
        Segment s_b = Segment(d_b, d_c);
        Segment s_c = Segment(d_a, d_b);
        Segment s_d = Segment(d_c, d_d);
        double a = s_a.length();
        double b = s_b.length();
        double c = s_c.length();
        double d = s_d.length();
        return ((a+b) / abs(a-b))* sqrt((p-a)*(p-b)*(p-a-c)*(p-a-d));
    }

    void repr_vertices(){
        std:: cout << "A: \t" << d_a.repr() << std::endl;
        std:: cout << "B: \t" << d_b.repr() << std::endl;
        std:: cout << "C: \t" << d_c.repr() << std::endl;
        std:: cout << "D: \t" << d_d.repr() << std::endl;
    }
    void repr(){
        repr_vertices();
        std:: cout << "P:\t" << get_perimeter() << std::endl;
        std:: cout << "S:\t" << get_area() << std::endl;
    }
};
#endif