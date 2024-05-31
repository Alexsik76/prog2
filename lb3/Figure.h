#ifndef FIGURE_H
#define FIGURE_H
#include <vector>
#include <algorithm>
#include "Dot.h"
#include "Segment.h"

class Figure
{

    std::vector<Dot> dots;
    std::vector<Segment> segments;

public:
    void addDot(int x = 0, int y = 0)
    {
        Dot new_dot = Dot(x, y);
        dots.emplace_back(new_dot);
    }
    void setDots(std::vector<Dot> new_dots)
    {
        // dots.clear();
        dots = new_dots;
    }
    void addSegment(Dot A = Dot(0, 0), Dot B = Dot(1, 1))
    {
        if (std::find_if(dots.begin(), dots.end(), [&A](const Dot &obj)
                         { return (obj.x == A.x) && (obj.y == A.y); }) == dots.end())
        {
            dots.emplace_back(A);
        }
        if (std::find_if(dots.begin(), dots.end(), [&B](const Dot &obj)
                         { return (obj.x == B.x) && (obj.y == B.y); }) == dots.end())
        {
            dots.emplace_back(A);
        }
        segments.emplace_back(Segment(A, B));
    }
    void setSegments(std::vector<Segment> new_segments)
    {
        segments.clear();
        for (auto &seg : new_segments)
        {
            addSegment(seg.a, seg.b);
        }
    }
    friend class Diamond;

public:
    virtual ~Figure() = default;
};

#endif