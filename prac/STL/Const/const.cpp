#include <iostream>

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
    void Print() const { std::cout << x << ", " << y << std::endl;}
    const Point & operator ++ () // 전위 ++
    {
        ++x;
        ++y;
        return * this;
    }
    const Point operator ++ (int) // 후위 ++
    {
        Point tmp = * this;
        ++ *this;
        return tmp;
    }
};

int main()
{
    Point p1(2, 3);
    Point p2(2, 3);
    Point result;

    result = ++ p1; // p1.operator ++ ();
    p1.Print();
    result.Print();

    result = p2 ++; // p2.operator ++ (0);
    p2.Print();
    result.Print();

    return 0;
}