#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; //Apple
    string s6 {s1, 0, 3}; //App
    string s7 {10, 'X'}; // displays 10 X's

    cout << s0 << endl; // no garbage
    cout << s0.length() << endl; // empty

    cout << "s1 is initialized to: " << s1 << endl;

    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;

    s3[0] = 'C';
    cout << "s3 change first letter to 'C': " << endl;
    s3.at(0) = 'P';
    cout << s3 << endl;

    s3 = s5 + " and " + s2 + " juice"; // apple and banana juice
    cout << s3 << endl;

    




    return 0;
}