#ifndef BANK_ACC_HPP
#define BANK_ACC_HPP

class bankAccount
{
    protected:
    int account_num;
    double balance;

    public:
    bankAccount(int account_num_main = 0, double balance_main = 0.0);
    void credit(double);
    void debit(double);
    double getBalance();
    void printInfo() const;
};

#endif