#include <iostream>
using namespace std;

const int MAX_ACCOUNTS = 100;

class Account {
public:
    int accountNumber;
    string name;
    float balance;

    void create(int accNum, string accName, float initialBalance) {
        accountNumber = accNum;
        name = accName;
        balance = initialBalance;
    }

    void show() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl << endl;
    }
  bool transfer(Account &to, float amount) {
        if (balance >= amount) {
            balance -= amount;
            to.balance += amount;
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Account accounts[MAX_ACCOUNTS];
    int totalAccounts = 0;


    accounts[0].create(101, "Pushti", 1000);
    accounts[1].create(102, "khushi", 500);
    totalAccounts = 2;

    cout << "Total Accounts: " << totalAccounts << endl << endl;


    cout << "Initial Account Info:\n";
    accounts[0].show();
    accounts[1].show();


    cout << "Transferring 200 from pushti to khushi...\n";
    if (accounts[0].transfer(accounts[1], 200)) {
        cout << "Transfer successful.\n";
    } else {
        cout << "Transfer failed. Insufficient balance.\n";
    }


    cout << "\nUpdated Account Info:\n";
    accounts[0].show();
    accounts[1].show();
    cout<<"24ce052_pushti kansara";

    return 0;
}
