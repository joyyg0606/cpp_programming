#include <iostream>
#include <cmath>
#include <cstdlib> // rand()
#include <ctime> // time()

using namespace std;

int main() {

    double num {};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

// generating a random number

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i{1}; i <= count; ++i) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }

    return 0;

}
