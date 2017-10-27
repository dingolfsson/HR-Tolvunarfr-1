#include <iostream>
#include "include/BankAccount.h"

using namespace std;

int main() {

	BankAccount account;
	account.readData();
	cout << endl << account;
	account.update();
	cout << account;

	double withd;
	cout << "How much to withdraw: ";
	cin >> withd;

	if (account.withdraw(withd)) {
		cout << "Amount withdrawn for account " << account.getNumber() << endl;
	} else {
		cout << "Unable to withdraw from account " << account.getNumber() << endl;
	}

    cout << endl << account;

    return 0;
}
