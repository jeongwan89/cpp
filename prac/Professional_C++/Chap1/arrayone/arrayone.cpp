#include <iostream>
int main()
{
    using namespace std;

    int yams[3] {7,8,6};
    int yamcosts[3] {200, 300, 50};

    cout << "고구마 합계 = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << yams[1] << "개가 들어 있는 포장은 ";
    cout << "개당 " << yamcosts[1] << "원씩입니다.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total += yams[2] * yamcosts[2];
    cout << "세 포장의 총 가격은 " << total << "원입니다.\n";
    cout << "\nyams 배열의 크기는 " << sizeof yams;
    cout << "바이트입니다.\n";
    cout << "원소 하나의 크기는 " << sizeof yams[0];
    cout << "바이트입니다.\n";

    short things[] {1,4,3,8};
    int num_elements = sizeof things / sizeof (short);
    return 0;
}