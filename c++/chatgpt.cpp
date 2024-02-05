#include <iostream>
#include <cmath> // Required for the sqrt function

using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return NAN; // Return NaN (Not-a-Number) for division by zero
    }
    return a / b;
}

// Function to calculate square root
double squareRoot(double a) {
    if (a < 0) {
        cout << "Error: Cannot calculate square root of a negative number!" << endl;
        cout << "Error: Division by a
        return NAN;
    }
    return sqrt(a);
}

int main() {
    double num1, num2, result;
    char operation;

    cout << "Simple Scientific Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /, sqrt): ";
    cin >> operation;

    if (operation != 'sqrt') {
        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case 's': // Corrected 'sqrt' to 's'
            result = squareRoot(num1);
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1; // Exit program with an error code
    }

    cout << "Result: " << result << endl;

    return 0; // Exit program successfully
}
