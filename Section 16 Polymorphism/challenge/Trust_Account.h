#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "unnamed trust account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonuc_amount = 50.0;
    static constexpr double bonus_threshold = 500.0;
    static constexpr int max_withdrwals = 3;
    static constexpr double max_withdraw_percent = 0.2;
protected:
    int num_withdrwals;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    virtual bool deposit(double amount) override;

    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Trust_Account() = default;
};

#endif