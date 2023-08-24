#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Think of a number between 1 and 100." << endl;

    vector <int> numbers;
    for (int i = 0; i <= 100; ++i)
        numbers.push_back(i);

    int lower = numbers[0];
    int upper = numbers[numbers.size()-1];
    char response;

    do {
        int guess = lower + (upper - lower) / 2;

        cout << "Is your number " << guess << "? (c/h/l): ";
        cin >> response;

        if (response == 'c' || response == 'C') {
            cout << "Great! I guessed your number." << endl;
            break;
        } else if (response == 'l' || response == 'L') {
            upper = (guess - 1);
        } else if (response == 'h' || response == 'H') {
            lower = (guess + 1);
        } else {
            cout << "Invalid response. Please enter 'c', 'h', or 'l'." << endl;
        }
    } while (true);

    return 0;
}
