#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    explicit Point(int _x = 0,  int _y = 0) :x(_x), y(_y){}
    void Print() const { cout << x << ", " << y << endl;}
    void Print2() const { cout << x << ", " << y << " Print2()" << endl;}
    void PrintInt (int n) { cout << "테스트 정수 : " << n << endl;}
    void PrintInt2 (int n) { cout << "테스트 정수 : " << n << " called by PrintInt2()";}
};

int main()
{
    Point pt(2, 3);
    Point *p = &pt;

    void (Point::*pf1)() const; // pf1은 Point 클래스의 void 형 반환 타입과 인자가 없는 const 멤버 함수 포인터
    pf1 = &Point::Print;

    void (Point::*pf2)(int);    // pf2는 Point 클래스의 void 형 반환 타입과 int형 인자를 갖는 멤버 함수 포인터
    pf2 = &Point::PrintInt;

    pt.Print();
    pt.PrintInt(10);
    cout << endl;

    (pt.*pf1)();
    (pt.*pf2)(10);
    cout << endl;

    (p->*pf1)();
    (p->*pf2)(10);

    pf1 = &Point::Print2;
    pf2 = &Point::PrintInt2;

    pt.Print();
    pt.PrintInt(10);
    cout << endl;

    (pt.*pf1)();
    (pt.*pf2)(10);
    cout << endl;

    (p->*pf1)();
    (p->*pf2)(10);
    return 0;
}