#include <iostream>
# include <iomanip>

using namespace std;

int main()
{

// practice

    // int score {};
    // cout << "Enter your score on the exam 0-100: ";
    // cin >> score;
    // char letter_grade {};

    // if (score >= 0 && score <= 100) {
    //     if (score >= 90) {
    //         letter_grade = 'A';
    //     } else if (score >= 80) {
    //         letter_grade = 'B';
    //     } else if (score >= 70) {
    //         letter_grade = 'C';
    //     } else if (score >= 60) {
    //         letter_grade = 'D';
    //     } else {
    //         letter_grade = 'F';
    //     }

    //     cout << "Your grade is: " << letter_grade << endl;
    //     if (letter_grade == 'F') {
    //         cout << "You failed" << endl;
    //     } else {
    //         cout << "You passed" << endl;
    //     }

    // } else {
    //     cout << "Sorry, " << score << " is not in range" << endl;
    // }

// shipping project

    int length{}, width{}, height{};
    double base_cost {2.50};

    const int tier1_threshold {100};
    const int tier2_threshold {500};

    int max_dimension_length {10};

    double tier1_surcharge {0.10};
    double tier2_surcharge {0.25};

    // all dimensions must be 10 inches or less

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Package rejected - dimension exceeded" << endl;
    } else {
        double package_cost {};
        package_volume = length * width * height;
        package_cost = base_cost;

        if (package_cost > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "adding tier 2 surcharge" << endl;
        } else if (package_cost > tier1_surcharge) {
            package_cost += package_cost * tier1_surcharge;
            cout << "adding tier 1 surcharge" << endl;
        }

        cout << fixed << setprecision(2); // prints money format 0.00
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $ " << package_cost << " to ship" << endl;
    }


    return 0;
}