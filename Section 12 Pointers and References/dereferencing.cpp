#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int score {100};
    int *score_ptr {&score};

    cout << *score_ptr << endl;

    *score_ptr = 200;

    cout << *score_ptr << endl; // 200
    cout << score << endl; // 200

    double high_temp {100.2};
    double low_temp {32.4};
    double *temp_ptr {&high_temp};

    cout << *temp_ptr << endl; // 100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl; // 32.4

    string name {"Frank"};
    string *string_ptr {&name};

    cout << *string_ptr << endl; // frank
    name = "James";
    cout << *string_ptr << endl; // James

    vector<string> stooges {"a","b","c"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry

    cout << "Stooges: ";
    for (auto stooge : *vector_ptr) {
        cout << stooge << " ";
    }
    cout << endl;

    return 0;
}