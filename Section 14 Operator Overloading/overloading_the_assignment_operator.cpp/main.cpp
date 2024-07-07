#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a{"Hello"};
    // Mystring b;
    // b = a;
    a = Mystring{"Hola"};
    a = "Bonjour"; //overloaded constructor then move assingment

    // b = "This is a test"; //b.operator=("This is a test");

    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge {larry};
    Mystring stooges;

    empty = stooge; //copy assignment operator
    empty = "Funny"; //move assingment operator, "Funny" is an r-value

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    stooges = "Larry, Move, and Curly";
    stooges.display();

    return 0;
}