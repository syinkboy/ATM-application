#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0;

    int choice;
    double amount;

    while (true) {
        cout << "\nATM menu" << endl; // added \n for spacing
        cout << "1. Check balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: $" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposited: $" << amount << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrew: $" << amount << endl;
                } else {
                    cout << "Invalid amount or insufficient funds!" << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}