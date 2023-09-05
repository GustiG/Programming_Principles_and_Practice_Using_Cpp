#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> fibonacci;
    int size = 0;
    cout << "How many numbers from the Fibonacci sequence do you want to see?\n";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid input. Please enter a positive number.\n";
        return 1; // Exit with an error code
    }

    fibonacci.push_back(0);
    if (size > 1) {
        fibonacci.push_back(1);
    }

    for (int i = 2; i < size; ++i) {
        int next = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci.push_back(next);
    }

    cout << "The Fibonacci sequence of " << size << " numbers is: ";
    for (int i = 0; i < fibonacci.size(); ++i) {
        cout << fibonacci[i];
        if (i < fibonacci.size() - 1)
            cout << ", ";
        else
            cout << ".\n";
    }

    return 0;
}
