// * A BankAccount class with deposit and withdraw functions defined externally.
using namespace std;


#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    void setInitialBalance(float bal);
    void deposit(float amount);
    void withdraw(float amount);
    float getBalance();
};

void BankAccount::setInitialBalance(float bal) {
    balance = bal;
}

void BankAccount::deposit(float amount) {
    balance += amount;
    cout << "Deposited " << amount << endl;
}

void BankAccount::withdraw(float amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "Withdrew " << amount << endl;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

float BankAccount::getBalance() {
    return balance;
}

int main() {
    BankAccount acc;
    acc.setInitialBalance(1000);
    cout << "Initial Balance: " << acc.getBalance() << endl;

    acc.deposit(500);
    acc.withdraw(200);
    acc.withdraw(1500);

    cout << "Final Balance: " << acc.getBalance() << endl;

    return 0;
}

