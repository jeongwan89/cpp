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

int main()
{
    calc(sum, 1, 5); //드디어 매개변수를 통해 함수를 전달할 수 있습니다.

    return 0;
}