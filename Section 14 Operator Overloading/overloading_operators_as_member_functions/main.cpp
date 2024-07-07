#include <iostream>
#include "Mystring.h"

int main() {
    cout << boolalpha << endl;

    Mystring larry{"Larry"};
    Mystring moe {"Moe"};

    Mystring stooge = larry;
    larry.display();
    moe.display();

    cout << (larry == moe) << endl; //false
    cout << (larry == stooge) << endl; //true

    larry.display();
    Mystring larry2 = -larry;
    larry2.display();

    Mystring stooges = larry + "Moe"; // ok w member function
    //Mystring stooges = "Larry" + moe; // compiler error
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + "Curly";
    three_stooges.display();

    return 0;
}