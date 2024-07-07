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
};

int main()
{
    const Point p1(0,0);
    Point p2(2, 3);

    p1.Print();
    p2.Print();

    std::cout << "p1: " << p1.GetX() << ", " << p1.GetY() << std::endl;
    std::cout << "p2: " << p2.GetX() << ", " << p2.GetY() << std::endl;

    p2.SetX(5);
    p2.SetY(5);

    p2.Print();

    return 0;
}