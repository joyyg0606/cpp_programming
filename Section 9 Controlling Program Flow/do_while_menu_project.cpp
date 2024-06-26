#include <iostream>

using namespace std;

int main()
{
    char selection {};
    do {
        cout << "\n=====================================" << endl;
        cout << "1 Do this" << endl;
        cout << "2 do that" << endl;
        cout << "3 do smth else" << endl;
        cout << "Q, quit" << endl;
        cout << "\nEnter your selectioin: ";
        cin >> selection;

        if (selection == '1') {
            cout << "You chose 1 - doing this" << endl;
        } else if (selection == '2') {
            cout << "You chose 2 - doing that" << endl;
        } else if (selection == '3') {
            cout << "You chose 3 - doing smth else" << endl;
        } else if (selection == 'q' || 'Q') {
            cout << "Goodbye" << endl;
        } else {
            cout << "Invalid - try again..." << endl;
        }

    } while (selection != 'q' && selection != 'Q');



    return 0;
}