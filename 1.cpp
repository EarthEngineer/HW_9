#include <cstdio>
#include <iostream>
#include <ctype.h>



namespace myspace
{
	void printNTimes(const char* str, int n = 10)
	{
		for (int i = 0; i < n; ++i)
			std::cout << str << "\n" ;
		return;
	}
}

int main()
{
    myspace::printNTimes("C++", 5);
}
