#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
 string name;
 string accountno;
 double balance;
public:
 Account(string n, string no, double b = 5000)
 {
 name = n;
 accountno = no;
 balance = b; // Corrected this line
 }
 void deposite(double amount) // to deposit the amount
 {
 balance += amount; // Update the balance
 cout << "Account No :" << accountno << endl;
 cout << "Deposited Amount :" << amount << endl;
 cout << "Total Bank Balance :" << balance << endl;
 cout << "\n" << endl;
 }
 void withdraw(double amount) // for withdraw
 {
 if (amount <= balance) // to avoid the problem of insufficient balance
    {
 balance -= amount; // Update the balance
 cout << "Account No :" << accountno << endl;
 cout << "Withdrawn Amount :" << amount << endl;
 cout << "Total Bank Balance :" << balance << endl;
 cout << "\n" << endl;
 }
 else
 {
 cout << "Account No :" << accountno << endl;
 cout << "Error insufficient balance" << endl;
 cout << "\n" << endl;
 }
  }
 void display()
 {
 cout << "Account Holder Name :" << name << endl;
 cout << "Account No :" << accountno << endl;
 cout << "Total Balance :" << balance << endl;
 cout << "\n\n" << endl;
 }
};
int main()
{
 Account A1("pushti", "24CE052", 45123);
 A1.deposite(1564);
 A1.display();
 Account A2("Reeva", "24CE026");
 A2.withdraw(1200);
 A2.display();
 cout<<"24CE052_pushti kansara";
 return 0;
}
