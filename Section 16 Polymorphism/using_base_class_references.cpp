#include <iostream>

class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw with amount " << amount << std::endl;
    }

    virtual ~Account() = default;  // Virtual destructor for proper cleanup of derived class objects
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Savings::withdraw with amount " << amount << std::endl;
    }
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Checking::withdraw with amount " << amount << std::endl;
    }
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Trust::withdraw with amount " << amount << std::endl;
    }
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);
}

int main() {
    Account a;
    Account &ref = a;
    ref.withdraw(1000);

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000);
    do_withdraw(a2, 2000);
    do_withdraw(a3, 3000);
    do_withdraw(a4, 4000);

    return 0;
}
