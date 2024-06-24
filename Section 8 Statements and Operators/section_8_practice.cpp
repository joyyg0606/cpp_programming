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

    // int counter {10};
    // int result {0};

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

    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = counter++ + 10;
    
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // int total {};
    // int num1 {}, num2 {}, num3 {};
    // const int count{3};

    // cout << "Enter 3 integers separated by spaces: ";
    // cin >> num1 >> num2 >> num3;

    // total = num1 + num2 + num3;

    // double average {0.0};
    // average = static_cast<double>(total) / count;
    // average = (double)total/count; // old style

    // cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    // cout << "The sum of the number is: " << total << endl;
    // cout << "The average of the number is: " << average << endl;

// testing for equality

    bool equal_result {false};
    bool not_equal_result {false};

    int num1{}, num2{};
    cout << boolalpha; //will display true/false instead of 1/0

    // cout << "Enter two integers separated by a space: ";
    // cin >> num1 >> num2;
    // equal_result = (num1 == num2);
    // not_equal_result = (num1 != num2);
    // cout << "Comparison result (equals): " << equal_result << endl;
    // cout << "Comparison result (not equals): " << not_equal_result << endl;

    // char char1{}, char2{};
    // cout << "Enter two characters separated by a space: ";
    // cin >> char1 >> char2;
    // equal_result = (char1 == char2);
    // not_equal_result = (char1 != char2);
    // cout << "Comparison result (equals): " << equal_result <<endl;
    // cout << "Comparison result (not equals): " << not_equal_result << endl;

    double double1{}, double2{};
    // cout << "Enter two doubles separated by a space: ";
    // cin >> double1 >> double2;
    // equal_result = (double1 == double2);
    // not_equal_result = (double1 != double2);
    // cout << "Comparison result (equals): " << equal_result <<endl;
    // cout << "Comparison result (not equals): " << not_equal_result << endl;

    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;


    return 0;
}