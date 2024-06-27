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

    // s3 = "nice" + "cold" + s5 + "juice"; //compiler error

    s1 = "Apple";
    for (size_t i {0}; i < s1.length(); ++i) {
        cout << s1.at(i);
    }

    // range base for loop
    for (char c : s1) {
        cout << c;
    }

    s1 = "This is a test";

    cout << s1.substr(0,4) << endl; // This

    // Erase

    s1.erase(0,5); // "is a test"
    cout << "s1 is now: " << s1 << endl;

    // getline
    
    string full_name {};
    cout << "Enter  your full name: ";
    getline(cin, full_name);
    
    cout << "You full name is: " << full_name << endl;


    // Find
    s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos) {
        cout << "Found " << word << " at position: " << position << endl;
    } else {
        cout << "Sorry, " << word << " not found" << endl;
    }
    
    return 0;
}