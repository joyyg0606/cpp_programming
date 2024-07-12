#include <iostream>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {}
};

std::ostream &operator<<(std::ostream &os, const Account &acc) {
    os << "Account display";
    return os;
}

class Checking : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {}
};

std::ostream &operator<<(std::ostream &os, const Checking &acc) {
    os << "Checking display";
    return os;
}

class Savings : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {}
};

std::ostream &operator<<(std::ostream &os, const Savings &acc) {
    os << "Savings display";
    return os;
}

class Trust : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {}
};

std::ostream &operator<<(std::ostream &os, const Trust &acc) {
    os << "Trust display";
    return os;
}

int main() {
    Account a;
    std::cout << a << std::endl;

    Checking c;
    std::cout << c << std::endl;

    Savings s;
    std::cout << s << std::endl;

    Trust t;
    std::cout << t << std::endl;

    return 0;
}
