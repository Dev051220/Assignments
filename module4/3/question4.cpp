#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful.\n";
        } else {
            cout << "Insufficient funds or invalid withdrawal amount.\n";
        }
    }
    double getBalance() const {
        return balance;
    }
};

int main() {
    int accountNum;
    double initialBalance;
    cout << "Enter account number: ";
    cin >> accountNum;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(accountNum, initialBalance);

    // Deposit
    double depositAmount;
    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    // Withdraw
    double withdrawAmount;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Display final balance
    cout << "Current balance: $" << account.getBalance() << std::endl;

    return 0;
}
