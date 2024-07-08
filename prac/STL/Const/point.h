#include <iostream>
#ifndef POINT_H_
#define POINT_H_

class Point
{
    int x;
    int y;
public:
    Point(int _x = 0, int _y = 0): x(_x), y(_y){}
    int GetX() const { return x;}
    int GetY() const { return y;}
    void SetX(int _x) { x = _x;}
    void SetY(int _y) { y = _y;}
    void Set(int _x, int _y);
    void Print() const { std::cout << x << ", " << y << std::endl;}

    const Point & operator ++(); // 전위 ++
    const Point operator ++(int); // 후위 ++
    const Point & operator --();
    const Point operator --(int);
    bool operator == (const Point & arg) const
    {
        return x == arg.x && y == arg.y ? true : false;
    }
    bool operator != (const Point & arg) const
    {
        return !(*this == arg);
    }
};

#endif