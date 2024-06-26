#include <iostream>
#include <vector>

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

// for loops

    vector<int>nums {10,20,30,40,50};
    for (unsigned i{0} ; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    for (auto val: {1,2,3,4,4}) {
        cout << val << endl;
    }

    for (auto c: "This is a test") {
        if (c != ' ') {
            cout << c;
        }
    }


// while loops

    int num {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;

    while (num > 0) {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;

// positive int to count up to

    int num {};
    cout << "Enter a positive integer to count up to: ";
    cin >> num;

    int i {1};
    while (num >= i) {
        cout << i << endl;
        i++;
    }

    int number{};
    cout << "Enter an integer less than 100: ";
    cin >> number;

    while (number >= 100) {
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }

    cout << "Thanks" << endl;

    bool done {false};
    int number {0};

    while (!done) {
        cout << "Enter an integer bestween 1 and 5: ";
        cin >> number;
        if (number <= 1 || number >= 5) {
            cout << "Out of range, try again" << endl;
        } else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    return 0;
}