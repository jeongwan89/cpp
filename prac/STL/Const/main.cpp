#include <iostream>
#include "point.h"

int main()
{

    using namespace std;
    {
        
    } // namespace std;
    
    Point p1(2, 3);
    Point p2(2, 3);
    Point result;

    result = ++ p1; // p1.operator ++ ();
    p1.Print();
    result.Print();

    result = p2 ++; // p2.operator ++ (0);
    p2.Print();
    result.Print();

    std::cout << "=====================\n";

    p1.Set(2, 3);
    p2.Set(2, 3);

    result = --p1;
    p1.Print();
    result.Print();

    result = p2--;
    p2.Print();
    result.Print();

    std::cout << "=====================\n";

    p1.Set(2, 3);
    p2.Set(5, 5);
    Point p3(2, 3);
    if(p1 == p2)
        cout << "p1 == p2" << endl;
    if(p1 == p3)
        cout << "p1 == p3" << endl;
    if(p1 != p2)
        cout << "p1 != p2" << endl;
    if(p1 != p3)
        cout << "p1 != p3" << endl;

    return 0;
}