// * 'CheckingAccount' and 'SavingsAccount' inherit from 'BankAccount'.

#include <iostream>

class BankAccount {
protected:
    float balance;
public:
    void setBalance(float b) { balance = b; }
};

class CheckingAccount : public BankAccount {
public:
    void writeCheck() {
        std::cout << "Wrote a check from account with balance: " << balance << std::endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    void earnInterest() {
        balance *= 1.05; // 5% interest
        std::cout << "Interest earned. New balance: " << balance << std::endl;
    }
};

int main() {
    CheckingAccount chk;
    SavingsAccount sav;
    chk.setBalance(1000);
    sav.setBalance(5000);
    chk.writeCheck();
    sav.earnInterest();
    return 0;
}
