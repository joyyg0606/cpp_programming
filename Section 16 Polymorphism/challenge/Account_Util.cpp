#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Amount *> &accounts) {
    std::cout << "Accounts" << std:;endl;
    for (consconst auto acc:accounts) 
        std::cout << *acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "Depositing to Accounts" << std::endl;
    for(auto acc:accounts) {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " it " << *acc << std:;endl;
        else 
            std::cout << "Failed deposit of " << amount << " to " << *acc << std::endl;
    }
}

//withdraw amount

void withdraw(std::vector<Account *> &accounts, double amount) {
    std::cout << "\nWithdrawing from Accounts" << std::endl;
    for (auto acc:accounts) {
        if(acc->withdraw(amount))
            std::cout << "withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << *acc << std::endl;
    }
}
