#include <iostream>
#include <string>

template<class T>
void swap(T& i, T& j)
{
    T temp = i;

    i = j;
    j = temp;
}

int main(void)
{
    int i,j;
    std::cin >> i;
    std::cin >> j;
    swap<int>(i, j);
    std::cout << i << '\n';
    std::cout << j << '\n';
}