#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

class Base {
public:
    int a{0};
    void display() { std::cout << a << ", " << b << ", " << c << endl; }
protected:
    int b{0};
private:
    int c{0};
};

class Derived: public Base {
public:
    void access_base_members() {
        a = 100;
        b = 200;
        // c = 300;
    }
};

int main() {
    cout << "Base member acess from base objects" << endl;
    Base base;
    base.a = 100;

    cout << "base member acess from derived objects" << endl;
    Derived d;
    d.a = 100;
    // d.b = 200; //Error
    // d.c = 300; //Error

    cout << "\nAccount" << endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout << endl;

    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    cout << "\nSavings Accunt" << endl;
    Savings_Account sav_acc{};
    sav_acc.deposit(30000.0);
    sav_acc.withdraw(500.0);

    cout << endl;

    Savings_Account *p_sav_acc{nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    cout << "\n============================" << endl;
    return 0;
}