#include <iostream>

using namespace std;

int main() {
    // int num1 {10}; // cant use const with this because changing later on
    // int num2 {20};

    // num1 = 100;
    // num2 = num1 = 1000;

    // cout << "num1 is " << num1 << endl;
    // cout << "num2 is " << num2 << endl;


// arithmetic operators

    // int num1 {200};
    // int num2 {100};

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    // int result {0};

    // result = num1 + num2;

    // cout << num1 << " + " << num2 << " = " << result << endl;

    // result = num1 - num2;
    // cout << num1 << " - " << num2 << " = " << result << endl;

    // result = num1 * num2;
    // cout << num1 << " * " << num2 << " = " << result << endl;

    // result = num1 / num2;
    // cout << num1 << " / " << num2 << " = " << result << endl;

    // result = num2 / num1;
    // cout << num2 << " / " << num1 << " = " << result << endl;

    // result = num1 % num2;
    // cout << num1 << " % " << num2 << " = " << result << endl;

    // num1 = 10;
    // num2 = 3;

    // result = num1 % num2;
    // cout << num1 << " % " << num2 << " = " << endl;

    // result = num1 * 10 + num2;

    // cout << 5/10 << endl;
    // cout << 5.0/10.0 << endl;


// cad to usd converting project

    // const double usd_per_cad {0.73};

    // cout << "Welcome to the CAD to USD converter" << endl;
    // cout << "Enter the value in CAD: ";

    // double cad {0.0};
    // double dollars {0.0};

    // cin >> cad;
    // dollars = cad * usd_per_cad;

    // cout << cad << " canadian dollars is = to " << dollars << " dollars" << endl;


// increment and decrement operators

    int counter {10};
    int result {0};

// example 1 - simple increment

    // cout << "Counter: " << counter << endl;

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl;

    // counter++;
    // cout << "counter: " << counter << endl;

    // ++counter;
    // cout << "Counter: " << counter << endl;

// exmaple 2 - preincrement

    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = ++counter; // note the pre increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

// example 3 - post increment
    
    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = counter++; // note the post increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

// example 4

    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = ++counter + 10; // increment before usage
    
    // cout << "Counter: " << counter << endl;
    // cout << "result: " << result << endl;

// example 5

    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;


    return 0;
}