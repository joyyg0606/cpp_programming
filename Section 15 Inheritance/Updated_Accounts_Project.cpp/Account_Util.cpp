#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account> &accounts) {
    std::cout << "Savings Accounts" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector <Account> &accounts, double amount) {
    std::cout << "Depositing to Accounts" << std::endl;
    for (auto &acc:accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
        }
    }   
}

void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "Withdrawing from Accounts" << std::endl;
    for(auto &acc:accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        } else {
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}