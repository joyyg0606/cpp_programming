// section 8 challenge

#include <iostream>

using namespace std;

int main()
{
    // int number_of_cents {0};
    // cout << "Enter an integer representing the number of cents: ";
    // cin >> number_of_cents;

    // int balance{}, dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};

    // dollars = number_of_cents / 100;
    // balance = number_of_cents - (dollars * 100);

    // quarters = balance / 25;
    // balance -= quarters * 25;

    // dimes = balance / 25;
    // balance -= dimes * 10;

    // nickels = balance / 5;
    // balance -= nickels * 5;

    // pennies = balance;

    // cout << "You can provide your change like this:" << endl;
    // cout << "dollars: " << dollars << "\nquarters: " << quarters << "\ndimes: " << dimes << "\nnickles: " << nickels << "\ndimes: " << dimes << "\npennies: " << pennies << endl;


// another way to solve this challenge using %

    int number_of_cents {0};
    cout << "Enter an integer representing the number of cents: ";
    cin >> number_of_cents;

    int balance{0}, dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};

    dollars = number_of_cents / 100;
    balance = number_of_cents % 100;

    quarters = balance / 25;
    balance %= 25;

    dimes = balance / 10;
    balance %= 10;

    nickels = balance / 5;
    balance %= 5;

    pennies = balance;

    cout << "You can provide your change like this:" << endl;
    cout << "dollars: " << dollars << "\nquarters: " << quarters << "\ndimes: " << dimes << "\nnickles: " << nickels << "\ndimes: " << dimes << "\npennies: " << pennies << endl;


    return 0;
}