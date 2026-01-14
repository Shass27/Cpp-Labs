#include "Bank.hpp"
#include <string>
#include <iostream>

BankAccount::BankAccount(string an, double bl): accountNumber(an), balance(bl) {}

string BankAccount::getAccountNumber() {
    return accountNumber;
}

double BankAccount::getBalance() {
    return balance;
}

void BankAccount::setBalance(double bl) {
    balance = bl;
}

void BankAccount::setAccountNumber(string accountNumber) {
    accountNumber = accountNumber;
}


void BankAccount::Transaction::deposit(BankAccount& ba, double amount) {
    double newBalance = ba.getBalance() + amount;
    ba.setBalance(newBalance);
    cout << "New Balance: " << newBalance << endl;
}

void BankAccount::Transaction::withdraw(BankAccount& ba, double amount) {
    double newBalance = ba.getBalance() - amount;
    ba.setBalance(newBalance);
    cout << "New Balance: " << newBalance << endl;
}

void Bank::createAccount(string accountNumber, double balance) {
    accounts.push_back(BankAccount(accountNumber, balance));
}

BankAccount* Bank::findAccount(string accountNumber) {
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            return &account;
        }
    }
    cout << "Account Not Found" << endl;
    return nullptr;
}

int Bank::transferMoney(BankAccount &source, BankAccount &target, double amount) {
    if (findAccount(target.getAccountNumber())!=nullptr && findAccount(source.getAccountNumber())!=nullptr) {
        if (amount<source.getBalance()) {
            BankAccount::Transaction tx;
            tx.withdraw(source, amount);
            tx.deposit(target, amount);
            return 1;
        }
        else {
            return 3;
        }
    }
    return 2;
}
