#include <cstdio>
#include <iostream>
#include <ctype.h>


int cubeV(int x)
{
    return x * x * x;
}

int main()
{
    int x = 234;
    std::cout << cubeV(x) << "\n";
}
