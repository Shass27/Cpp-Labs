#include <iostream>
#include "Bank.hpp"

using namespace std;

int main() {
    Bank Shas_bank;
    Shas_bank.createAccount("1001", 5000);
    Shas_bank.createAccount("1002", 3000);
    Shas_bank.createAccount("1003", 2000);

    BankAccount* account1 = Shas_bank.findAccount("1001");
    BankAccount* account2 = Shas_bank.findAccount("1002");
    BankAccount* account3 = Shas_bank.findAccount("1003");

    BankAccount::Transaction tx;
    tx.deposit(*account1, 1000);
    tx.withdraw(*account2, 500);

    int result = Shas_bank.transferMoney(*account1, *account3, 1000);

    if (result == 1) {
        cout << "Transfer Successful" << endl;
    }
    else if (result == 2) {
        cout << "Account Not Found" << endl;
    }
    else {
        cout << "Insufficient Funds" << endl;
    }
    retun 0;
}