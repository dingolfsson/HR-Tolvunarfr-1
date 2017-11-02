#include "../include/BankAccount.h"

BankAccount::BankAccount() {
    customer_number = 0;
    balance = 0;
    intrests = 0;
}

void BankAccount::readData() {
    cin >> customer_name;
    cin >> customer_number;
    cin >> balance;
    cin >> intrests;
}

ostream& operator << (ostream& out, const BankAccount& bankaccount) {
    out << "Customer name: " << bankaccount.customer_name << endl;
    out << "Customer number: " << bankaccount.customer_number << endl;
    out << "Balance: " << bankaccount.balance << endl;
    out << "Interest rate: " << bankaccount.intrests << endl << endl;
    return out;
}

void BankAccount::update() {
    balance *= (1 + intrests / 100);
}

bool BankAccount::withdraw(double withdraw) {
    if (withdraw <= balance) {
        balance -= withdraw;
        return true;
    }
    return false;
}

int BankAccount:: getNumber() {
    return customer_number;
}
