#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance) : Account {name, balance} {

}

bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    return Account::withdraw(amount);

virtual boolChecking_Account::deposit(double amount) {
    return Account::deposit (amount);
}

void Checking_Account::print(std::ostream &os) const override {
    os.precision(2);
    os << std::fixed;
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";

}
