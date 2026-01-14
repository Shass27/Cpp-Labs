#include <string>
#include <iostream>

using namespace std;

class BankAccount {
    private:
    string accountNumber;
    double balance;

    public:
    BankAccount(string an, double bl);
    string getAccountNumber();
    double getBalance();
    void setAccountNumber(string accountNumber);
    void setBalance(double balance);
    class Transaction {
    public:
        void deposit(BankAccount& ba, double amount);
        void withdraw(BankAccount& ba, double amount);
    };
};

class Bank {
    private:
    vector<BankAccount> accounts;
    public:
    void createAccount(string accountNumber, double balance);
    BankAccount* findAccount(string accountNumber);
    int transferMoney(BankAccount& source, BankAccount& target, double amount);
};