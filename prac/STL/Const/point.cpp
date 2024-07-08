#include "point.h"

const Point & Point::operator ++ ()
{
    ++x;
    ++y;
    return *this;
}

const Point Point::operator ++ (int)
{
    Point tmp = *this;
    ++*this;
    return tmp;
}

const Point & Point::operator -- ()
{
    --x;
    --y;
    return *this;
}

const Point Point::operator -- (int)
{
    Point pt(x, y);
    --x;
    --y;
    return pt;
}

void Point::Set(int _x, int _y)
{
    x = _x;
    y = _y;
}