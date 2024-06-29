#include <iostream>

using namespace std;

// recursion - fibonacci

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) {
        return n; // base cases
    }
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

// recursion - factorial

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1); // recursive case
}

// scope rules

void local_example();
void global_example();
void static_local_example();

int num {300}; // global variable - declared outside any class or function

void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example (int x) {
    int num {1000}; // local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl; // 1000
    num = x;
    cout << "Local num is: " << num << " in local-example - end" << endl; // 10
    // num1 in main is not within scope - so it can't be used here.
}

void static_local_example() {
    static int num {5000}; // local to static_local_example static - retains its value between calls
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}

// how do function calls work?

void func2(int &x, int y, int z) {
    x += y + z;
}

int func1(int a, int b) {
    int result {};
    result = a + b;
    func2(result, a, b);
    return result;
}

int main () {

// scope rules

    int num {100}; // local to main
    int num1 {500};

    cout << "Local num is: " << num << " in main" << endl;

    { // creates a new level of scope
        int num {200};
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num 1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();
    cout << endl;

// how do function calls work?

    int x{10};
    int y{20};
    int z{};
    z = func1(x,y);
    cout << z << endl;

// Recursion - Fibonacci

    cout << fibonacci(5) << endl; //5
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;

// recursion - factorial

    cout << factorial(3) << endl; // 6
    cout << factorial(8) << endl;
    cout << factorial(12) << endl;
    cout << factorial(20) << endl; // big number

    return 0;

}