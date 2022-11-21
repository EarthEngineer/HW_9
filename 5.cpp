#include <cstdio>
#include <iostream>
#include <ctype.h>


struct Book
{
    char title[100];
    int pages;
    float price;
};

int addPrice(Book& a, float x){
    a.price += x;
}

int main()
{
    Book book = {"Faust", 346, 499};
    Book& a = book;
    addPrice(a, 50.0);
    std::cout << a.price << "\n";
}
