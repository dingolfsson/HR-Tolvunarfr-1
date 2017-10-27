#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    public:

        BankAccount();

        void readData();

        friend ostream& operator << (ostream& out, const BankAccount& bankAccount);

        void update();

        bool withdraw(double withdraw);

        int getNumber();


    private:

        string customer_name;
        int customer_number;
        double balance;
        double intrests;

};

#endif // BANKACCOUNT_H
