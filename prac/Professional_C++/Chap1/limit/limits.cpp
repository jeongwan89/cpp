#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof (int) << " Bytes." << endl;
    cout << "short is " << sizeof n_short << " Bytes." << endl;
    cout << "long is " << sizeof n_long << " Bytes." << endl;
    cout << "long long is " << sizeof n_llong << " Bytes." << endl;
    cout << endl;

    cout << "Maximum value" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;
    cout << "Mimimum value";
    cout << "int: " << INT_MIN << endl;
    cout << "Bit per Byte: " << CHAR_BIT << endl;    

    return 0;
}