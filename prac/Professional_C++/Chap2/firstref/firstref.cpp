#include <iostream>
int main()
{
        using namespace std;
        int rats = 101;
        int & rodents = rats;

        cout << "rats = " << rats;
        cout << ", rodents = " << rodents << endl;
        rodents++;
        cout << "rats = " << rats;
        cout << ", rodents = " << rodents << endl;

        cout << "rats의 주소    = " << &rats << endl;
        cout << "rodents의 주소 = " << &rodents << endl;

        return 0;
}