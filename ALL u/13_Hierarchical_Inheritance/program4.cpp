// * 'CheckingAccount' and 'SavingsAccount' inherit from 'BankAccount'.
using namespace std;


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
        cout << "Wrote a check from account with balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    void earnInterest() {
        balance *= 1.05; // 5% interest
        cout << "Interest earned. New balance: " << balance << endl;
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

