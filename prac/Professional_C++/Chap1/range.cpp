//Main.cpp

#include <iostream>
#include <ranges>
#include <algorithm>
#include <array>
namespace rg = std::ranges;

int main()
{
    auto arr = std::to_array({12, 8, 3, 7});

    rg::sort(arr);
    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (i != 0)
            std::cout << ", ";
        std::cout << arr[i];
    }
    std::cout << "\n\n"
              << __cplusplus; //this will return the version of C++
}