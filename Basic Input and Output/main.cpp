// section 5

#include <iostream>

using namespace std;

int main() 
{
    cout << "Hello world!";

    cout << "Hello";
    cout << "World" << endl;

    cout << "Hello world!" << endl;
    cout << "Hello" << " world!" << endl;
    cout << "Hello" << " world!\n";
    cout << "Hello\nOut\nThere\n";

    int num1;
    int num2;
    double num3;

    cout << "Enter an integre: ";
    cin >> num1;
    cout << "You entered: " << num1 << endl;

// 2nd example

    cout << "Enter a first integer: ";
    cin >> num1;

    cout << "Enter a second integer: ";
    cin >> num2;

    cout << "You entered " << num1 << " and " << num2 << endl;

    cout << "Enter 2 integers spearated with a space: ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;

    cout << "Enter a double: ";
    cin >> num3;

    cout << "You entered: " << num3 << endl;

// 3rd example

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Enter a double: ";
    cin >> num3;

    cout << "The integer is: " << num1 << endl;
    cout << "And the double is " << num3 << endl;


// excersizes 

    int x {3};
    cout << "Sally has " << x << " dogs.";

// date of birth excersize

    int m {};
    int d {};
    int y {};

    cin >> m;
    cin >> d;
    cin >> y;

    cout << m << " " << d << " " << y;

    return 0;
}