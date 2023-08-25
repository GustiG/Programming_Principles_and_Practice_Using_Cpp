#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<string> spelled = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    unordered_map<string, int> spelledToNumber;
    
    for (int i = 0; i < spelled.size(); ++i)
    {
        spelledToNumber[spelled[i]] = i;
    }

    cout << "Enter the first number (0 - 9 or spelled out): ";
    string input1;
    cin >> input1;

    cout << "Enter an operator (+, -, *, /): ";
    char operation;
    cin >> operation;

    cout << "Enter the second number (0 - 9 or spelled out): ";
    string input2;
    cin >> input2;

    int num1, num2;

    if (isdigit(input1[0])) {
        num1 = input1[0] - '0';
    } else {
        num1 = spelledToNumber[input1];
    }

    if (isdigit(input2[0])) {
        num2 = input2[0] - '0';
    } else {
        num2 = spelledToNumber[input2];
    }

    int result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Division by zero is not allowed." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operator." << endl;
            return 1; // Exit with an error code
    }

    cout << "Result: " << result << endl;

    return 0;
}
