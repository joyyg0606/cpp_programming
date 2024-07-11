#include <iostream>
#include <vector>

class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() = default;
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {std::cout << "Savings:: destructor" << std::endl;}
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {std::cout << "Savings:: destructor" << std::endl;}
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {std::cout << "Trust:: destrutor" << std::endl;}
};

int main() {
    std::cout << "Pointers" << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "Array" << std::endl;
    Account *array[] = {p1, p2, p3, p4};
    for (auto i = 0; i < 4; ++i)
        array[i]->withdraw(1000);

    std::cout << "Vector" << std::endl;
    std::vector<Account *> accounts{p1, p2, p3, p4};
    for (auto acc_ptr : accounts)
        acc_ptr->withdraw(1000);

    std::cout << "Clean up" << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
