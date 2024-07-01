#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num {100};
    int &ref {num};

    cout << num << endl; // 100
    cout << ref << endl; // 100

    num = 100;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << num << endl; // 300
    cout << ref << endl; // 300

    vector<string> stooges {"a","b","c"};

    for (auto str : stooges) {
        str = "funny"; // str is a copy of each vector element
    }

    for (auto str:stooges) // no change
        cout << str << endl;

    for (auto &str:stooges) // str is a reference to each vector element
        str = "Funny";

    for (auto const &str:stooges) // notice we are using const
        cout << str << endl; // now the vector elements have changed    

    return 0;
}