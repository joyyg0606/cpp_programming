#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 string: " << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s : v) {
        cout << s + " ";
    }
    cout << endl;
}

int main() {
    print(100); // int
    print('A'); // ascii number

    print(123.5);
    print(123.3F); // float promoted to a double

    print("C-style string"); // c-style string is converted to a c++ string

    string s("c++ string");
    print(s);

    print("C-styled string", s);

    vector<string> three_stooges {"a","b","c"};
    print(three_stooges);

    return 0;
}