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

    // bool equal_result {false};
    // bool not_equal_result {false};

    // int num1{}, num2{};
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

    // double double1{}, double2{};
    // cout << "Enter two doubles separated by a space: ";
    // cin >> double1 >> double2;
    // equal_result = (double1 == double2);
    // not_equal_result = (double1 != double2);
    // cout << "Comparison result (equals): " << equal_result <<endl;
    // cout << "Comparison result (not equals): " << not_equal_result << endl;

    // cout << "Enter an integer and a double separated by a space: ";
    // cin >> num1 >> double1;
    // equal_result = (num1 == double1);
    // not_equal_result = (num1 != double1);
    // cout << "Comparison result (equals): " << equal_result << endl;
    // cout << "Comparison result (not equals): " << not_equal_result << endl;

// relational operators

    // cout << "Enter 2 integers separated by a space: ";
    // cin >> num1 >> num2;

    // cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    // cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    // cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    // cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    // const int lower {10};
    // const int upper {20};

    // cout << "\nEnter an integer that is greater than " << lower << ":";
    // cin >> num1;
    // cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

    // cout << "\nEnter an integer that is less than or equal to " << upper << ":";
    // cin >> num1;
    // cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

// logical operators

    // int num {};
    // const int lower {10};
    // const int upper {20}; 

    // // determine if an entered integer is between two other integers
    // // assume lower < upper
    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    // cin >> num;

    // bool within_bounds {false};

    // within_bounds = (num > lower && num < upper);
    // cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

    // // determine if an entered integer is outside two other integers
    // // assume lower < upper
    // cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    // cin >> num;

    // bool outside_bounds {false};
    // outside_bounds = (num < lower || num > upper);
    // cout << num << " is out " << lower << " and " << upper << " : " << outside_bounds << endl;

    // // determine if it is exactly on the boundary
    // // assume lower < upper
    // cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    // cin >> num;

    // bool on_bounds {false};
    // on_bounds =  (num == lower || num == upper);
    // cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;

    // Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};

    const int wind_speed_for_coat {25}; // win over this needs coat
    const double temperature_for_coat {45}; // temp below this needs a coat

    cout << "\nEnter the current temperature in (F): ";
    cin >> temperature;
    cout << "Enter wind speed in (mph): ";
    cin >> wind_speed;

    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;


    return 0;
}