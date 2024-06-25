#include <iostream>

using namespace std;

int main()
{
// switch practice

    // char letter_grade {};

    // cout << "Enter the letter grade you want for the exam: ";
    // cin >> letter_grade;

    // switch (letter_grade) {
    //     case 'a':
    //     case 'A':
    //         cout << "You need a 90 or above" << endl;
    //         break;
    //     case 'b':
    //     case 'B':
    //         cout << "You need a 80-89" << endl;
    //         break;
    //     case 'c':
    //     case 'C':
    //         cout << "You need a 70-79" << endl;
    //         break;
    //     case 'd':
    //     case 'D':
    //         cout << "You should strive for a better grade, 60-69" << endl;
    //         break;
    //     case 'f':
    //     case 'F':
    //     {
    //         char confirm {};
    //         cout << "Are you sure (Y/N)? ";
    //         cin >> confirm;
    //         if (confirm == 'y' || confirm == 'Y') {
    //             cout << "Failure." << endl;
    //         } else if (confirm == 'n' || confirm == 'N') {
    //             cout << "That's what I thought";
    //         } else {
    //             cout << "Invalid Choice" << endl;
    //         }
    //         break;
    //     }
    //     default:
    //         cout << "Invalid grade" << endl;
    // }


// switch with enumeration

    enum Direction {
        left, right, up, down
    };

    Direction heading {left};

    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going left" << endl;
            break;
        default:
            cout << "ok" << endl;
    }

    return 0;
}