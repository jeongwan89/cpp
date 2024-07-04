#include <iostream>
template <class Any>
void Swap(Any &, Any &);

int main()
{
    using namespace std;

    int i = 10;
    int j = 20;

    cout << "i, j =" << i << ", " << j << ".\n";
    cout << "컴파일러가 생성한 int형 교환기를 사용하면 \n";
    Swap(i, j);
    cout << "이제 \ni, j = " << i << ", " << j << ".\n" << endl;

    double x = 24.5;
    double y = 81.7;

    cout << "x, y = " << x << ", " << y << "\n";
    cout << "컴파일러가 생성한 double형 교환기를 사용하면 \n";
    Swap(x, y);
    cout << "이제 \nx, y = " << x << ", " << y << ". \n";

    return 0;
}

template <class T>
void Swap(T & a, T & b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}