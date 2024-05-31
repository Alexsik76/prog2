#ifndef DIAMOND_H
#define DIAMOND_H
#include "Dot.h"
#include "Segment.h"
#include "Figure.h"

class Diamond : public Figure
{

public:
    Diamond(Dot in_a, Dot in_b, Dot in_c, Dot in_d)
    {
        std::vector<Dot> vect{in_a, in_b, in_c, in_d};
        setDots(vect);

        addSegment(dots[0], dots[1]);
        addSegment(dots[1], dots[2]);
        addSegment(dots[2], dots[3]);
        addSegment(dots[3], dots[0]);
    };
    Diamond(std::vector<Dot> new_dots)
    {
        setDots(new_dots);
    };
    Diamond(std::vector<Segment> new_segments)
    {
        setSegments(new_segments);
    };

    double get_perimeter()
    {
        double P = 0;
        for (auto &sg : segments)
        {
            P += sg.length();
        }
        return P;
    }

    double get_area() {
        double d1 = Segment(dots[0], dots[2]).length();
        double d2 = Segment(dots[1], dots[3]).length();
        return (d1 * d2) / 2;
    }

    void repr()
    {
        for (auto &sg : segments)
        {
            sg.repr_dots();
        }
        std::cout << "P:\t" << get_perimeter() << std::endl;
        std:: cout << "S:\t" << get_area() << std::endl;
    }
};
#endif