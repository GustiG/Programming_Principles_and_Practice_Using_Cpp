#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> spelled = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Enter a number from 0 - 9 to spell or a spelled out number: ";

    string input;
    while (cin >> input)
    {
        bool found = false;

        // Check if the input matches a spelled-out number
        for (int i = 0; i < spelled.size(); ++i)
        {
            if (input == spelled[i])
            {
                cout << "Numeric value: " << numbers[i] << endl;
                found = true;
                break;
            }
        }

        // If not found in spelled-out numbers, check if it's a numeric value
        if (!found)
        {
            for (int i = 0; i < numbers.size(); ++i)
            {
                if (stoi(input) == numbers[i])
                {
                    cout << "Spelled out number: " << spelled[i] << endl;
                    found = true;
                    break;
                }
            }
        }

        // If input doesn't match any known spelled-out number or numeric value
        if (!found)
        {
            cout << "Invalid input." << endl;
        }
    }

    return 0;
}
