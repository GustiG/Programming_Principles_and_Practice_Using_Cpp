#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> end_num = { 5, 6, 9, 1 };
    vector<int> guess(4);

    cout << "Guess my 4 digit number: ";
    while (cin >> guess[0] >> guess[1] >> guess[2] >> guess[3]) {
        int bulls = 0;
        int cows = 0;

        for (int i = 0; i < 4; ++i) {
            if (guess[i] == end_num[i]) {
                bulls++;
            } else {
                for (int j = 0; j < 4; ++j) {
                    if (guess[i] == end_num[j]) {
                        cows++;
                    }
                }
            }
        }

        if (bulls == 4) {
            cout << "Congratulations, the number was ";
            for (int i = 0; i < 4; ++i) {
                cout << end_num[i];
            }
            cout << "!\n";
            break;
        } else {
            cout << "Bulls: " << bulls << ", Cows: " << cows << endl;
        }
        
        cout << "Guess again: ";
    }

    return 0;
}
