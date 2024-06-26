#include <iostream>

using namespace std;

int main()
{
// character type

    char middle_initial {'j'}; //single quotes
    cout << "My middle initial is " << middle_initial << endl;

// integer types

    unsigned short int exam_score {55}; // same as unsigned short exam_score {55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida {34578856};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long long people_on_earth {9'321'432'221};
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    long long distance_to_alpha_centauri {9'123'234'345'456};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

// floating point types

    float car_payment {412.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;

// boolaen type

    bool game_over {false};
    cout << "The value of gaem over is " << game_over << endl;

// overflow example

    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};

    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;


    return 0;
}