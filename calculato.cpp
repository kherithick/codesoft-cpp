#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char operation;

    cout << "===================================" << endl;
    cout << "        SIMPLE CALCULATOR" << endl;
    cout << "===================================" << endl;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Choose operation
    cout << "\nChoose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation
    switch(operation)
    {
        case '+':
            result = num1 + num2;
            cout << "\nResult = " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << "\nResult = " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << "\nResult = " << result;
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                cout << "\nResult = " << result;
            }
            else
            {
                cout << "\nError! Division by zero is not allowed.";
            }
            break;

        default:
            cout << "\nInvalid Operator!";
    }

    return 0;
}
