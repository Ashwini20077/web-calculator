#include <iostream>
#include <cmath> // For power, square root, and modulus functions
#include <limits> // For input validation

using namespace std;

class Calculator {
public:
    // Function to perform addition
    double add(double a, double b) { return a + b; }

    // Function to perform subtraction
    double subtract(double a, double b) { return a - b; }

    // Function to perform multiplication
    double multiply(double a, double b) { return a * b; }

    // Function to perform division
    double divide(double a, double b) {
        if (b != 0) 
            return a / b;
        else {
            cout << "Error: Division by zero!\n";
            return NAN;
        }
    }

    // Function to calculate power (a^b)
    double power(double base, double exponent) { return pow(base, exponent); }

    // Function to calculate modulus (supports floating-point)
    double modulus(double a, double b) {
        if (b != 0)
            return fmod(a, b);
        else {
            cout << "Error: Modulus by zero!\n";
            return NAN;
        }
    }

    // Function to calculate square root
    double squareRoot(double a) {
        if (a >= 0)
            return sqrt(a);
        else {
            cout << "Error: Negative number can't have a real square root!\n";
            return NAN;
        }
    }
};

// Function to handle user input safely
double getValidNumber() {
    double num;
    while (!(cin >> num)) {
        cout << "Invalid input! Please enter a valid number: ";
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore incorrect input
    }
    return num;
}

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    cout << "==== Advanced Calculator ====" << endl;
    cout << "1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n";
    cout << "5. Power (^)\n6. Modulus (%)\n7. Square Root (√)\n8. Exit\n";

    do {
        cout << "\nEnter your choice: ";
        while (!(cin >> choice)) {
            cout << "Invalid choice! Please enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                num1 = getValidNumber();
                num2 = getValidNumber();
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                num1 = getValidNumber();
                num2 = getValidNumber();
                cout << "Result: " << calc.subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                num1 = getValidNumber();
                num2 = getValidNumber();
                cout << "Result: " << calc.multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                num1 = getValidNumber();
                num2 = getValidNumber();
                cout << "Result: " << calc.divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                num1 = getValidNumber();
                num2 = getValidNumber();
                cout << "Result: " << calc.power(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter two numbers: ";
                num1 = getValidNumber();
                num2 = getValidNumber();
                cout << "Result: " << calc.modulus(num1, num2) << endl;
                break;
            case 7:
                cout << "Enter a number: ";
                num1 = getValidNumber();
                cout << "Result: " << calc.squareRoot(num1) << endl;
                break;




            case 8:
                cout << "Exiting the calculator. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } 
    while (choice != 8);
    return 0;
}

