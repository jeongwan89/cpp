#include <iostream>

using namespace std;

int sum(int lv, int rv)
{
    return lv + rv;
}

void calc(int (*fptr)(int, int), int lv, int rv) 

{
    cout << fptr(lv, rv) << endl << endl;
}

void Print(int n)
{
    cout << "정수: " << n << endl;

}
int main()
{
    calc(sum, 1, 5); //드디어 매개변수를 통해 함수를 전달할 수 있습니다.

    void (*pf)(int);
    pf = Print;

    Print(10);  // 1. 함수호출
    pf(10);     // 2. 포인터를 이용한 함수 호출, 첫 번째 방법
    (*pf)(10);  // 3. 포인터를 이용한 함수 호출, 두 번째 방법

    cout << endl;
    cout << Print << endl;
    cout << pf << endl;
    cout << *pf << endl;

    return 0;
}