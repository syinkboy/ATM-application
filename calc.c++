#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+. -, *, /, ^,): ";
    cin >> operation;

    if (operation != 'sqrt') {
        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
            cout << " num1 + num2 = " << num1 + num2 << endl;
            break;
        }
    }

    return 0;

}

// "