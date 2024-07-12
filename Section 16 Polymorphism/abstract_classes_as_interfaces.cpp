#include <iostream>

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}

class Account : public I_Printable {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Account display";
    }
    virtual ~Account() {}
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Checking display";
    }
    virtual ~Checking() {}
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Savings display";
    }
    virtual ~Savings() {}
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Trust display";
    }
    virtual ~Trust() {}
};

class Dog : public I_Printable {
public:
    virtual void print(std::ostream &os) const override {
        os << "woof woof";
    }
};

int main() {
    Dog *dog = new Dog();
    std::cout << *dog << std::endl;
    delete dog;  // Clean up allocated memory

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
