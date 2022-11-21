#include <cstdio>
#include <iostream>
#include <ctype.h>

int cubeR(const int& n)
{
    return n * n * n;
}
int main()
{
   std::cout << cubeR(10) << "\n";
}
