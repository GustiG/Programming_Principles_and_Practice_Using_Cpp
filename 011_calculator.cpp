#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    char operation;
    double operand1, operand2;
    
    cout << "Enter an operation followed by two operands: ";
    cin >> operation >> operand1 >> operand2;
    
    double result;
    
    switch (operation) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}
