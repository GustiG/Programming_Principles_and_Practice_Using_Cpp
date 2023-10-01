#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random 4-digit number
int generateSecretNumber() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = 1000 + rand() % 9000;
    return secretNumber;
}

// Function to get the user's guess
int getUserGuess() {
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;
    return guess;
}

// Function to calculate Bulls and Cows
void calculateBullsAndCows(int secret, int guess, int &bulls, int &cows) {
    bulls = cows = 0;

    string secretStr = to_string(secret);
    string guessStr = to_string(guess);

    for (int i = 0; i < 4; ++i) {
        if (secretStr[i] == guessStr[i]) {
            bulls++;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (i != j && secretStr[i] == guessStr[j]) {
                    cows++;
                    break;
                }
            }
        }
    }
}

int main() {
    cout << "Welcome to Bulls and Cows Game!\n";

    int secretNumber = generateSecretNumber();
    int attempts = 0;

    while (true) {
        int userGuess = getUserGuess();
        attempts++;

        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        } else {
            int bulls, cows;
            calculateBullsAndCows(secretNumber, userGuess, bulls, cows);
            cout << "Bulls: " << bulls << " Cows: " << cows << "\n";
        }
    }

    return 0;
}
