#include <iostream.h>
#include <conio.h>

class Account {
public:
    int accountNo;
    float balance;

    void getData() {
	cout << "Enter account number: ";
	cin >> accountNo;
	cout << "Enter balance: ";
	cin >> balance;
    }

    void showData() {
	cout << "Account No: " << accountNo << ", Balance: " << balance << endl;
    }
};

void main() {
    clrscr();
    Account acc[5];

    cout << "Enter details for 5 accounts:\n";
    for (int i = 0; i < 5; i++) {
	cout << "\nAccount " << i + 1 << ":\n";
	acc[i].getData();
    }

    cout << "\nAccounts with balance greater than 10000:\n";
    for ( i = 0; i < 5; i++) {
	if (acc[i].balance > 10000) {
	    acc[i].showData();
	}
    }

    getch();
}