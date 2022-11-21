#include <cstdio>
#include <iostream>
#include <ctype.h>

void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (isdigit(str[i]))
            numDigits++;

        else if(isalpha(str[i]))
            numLetters++;

        else
            numOther++;

        i++;
    }
}

int main()
{
    char a[1000] = "Hello, world!";
    const char* Str = a;
    int D, L, O = 0;
    countLetters(Str, L, D,O);
    std::cout << "Letters: " << L << "\n" << "Digits: "  << D << "\n" << "Other: " << O << "\n";

}
