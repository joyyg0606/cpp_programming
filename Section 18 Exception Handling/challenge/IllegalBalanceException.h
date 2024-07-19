#ifndef _ILLEGAL_BALANCE_EXCEPTION_H_
#define _ILLEGAL_BALANCE_EXCEPTION_H_

class IllegalBalanceException
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept {
        return "Illegal balance exception";
    }
};

#endif