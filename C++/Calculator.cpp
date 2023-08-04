#include <iostream>

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Cannot divide by zero" << endl;
        return 0;
    }
}

int main() {
    cout << "Welcome to the Calculator Program!" << endl;

    while (true) {
        cout << "\nPlease select an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "0. Exit" << endl;

        int choice;
        cout << "Enter your choice (0-4): ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program..." << endl;
            break;
        }

        double num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        double result;
        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                result = divide(num1, num2);
                cout << "Result: " << result << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}

