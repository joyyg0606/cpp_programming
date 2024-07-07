#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a{"Hello"};
    Mystring b;
    b = a;

    b = "This is a test"; //b.operator=("This is a test");

    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge {larry};
    Mystring stooges;

    empty = stooge; //copy assignment operator

    empty.display();
    larry.display();
    stooge.display();
    empty.display();


}