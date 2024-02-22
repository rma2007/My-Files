#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Simple Scientific Calculator" << endl;
    cout << "Enter an operation (+, -, *, /, sqrt, ^): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            break;
        case '-':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            break;
        case '*':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            break;
        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        case 's':
        case 'S':
            cout << "Enter a number for square root: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Error: Square root of a negative number" << endl;
                return 1;
            }
            result = sqrt(num1);
            break;
        case '^':
            cout << "Enter the base: ";
            cin >> num1;
            cout << "Enter the exponent: ";
            cin >> num2;
            result = pow(num1, num2);
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

