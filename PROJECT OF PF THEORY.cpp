#include <iostream>
using namespace std;

double balance = 0.0;

void checkBalance() {
    cout << "Current Balance: $" << balance << endl;
}

void deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Successfully deposited $" << amount << endl;
    } else {
        cout << "Invalid deposit amount" << endl;
    }
}

void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Successfully withdrew $" << amount << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance" << endl;
    } else {
        cout << "Invalid withdrawal amount" << endl;
    }
}

void menu() {
    int choice;
    double amount;

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            checkBalance();
        } else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            deposit(amount);
        } else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            withdraw(amount);
        } else if (choice == 4) {
            cout << "Exiting...\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}
