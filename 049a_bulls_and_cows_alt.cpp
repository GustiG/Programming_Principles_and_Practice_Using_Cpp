#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> target = { 4, 6, 9, 0 };
    vector<int> guessed(4);

    cout << "Guess my 4 digit number: ";
    while(cin >> guessed[0] >> guessed[1] >> guessed[2] >> guessed[3]) {
        int bull = 0;
        int cow = 0;

        if(guessed == target) {
            cout << "Congratulations, you guessed correctly" << endl;
            break;
        }

        for(int i = 0; i < guessed.size(); ++i) {
            for(int j = 0; j < target.size(); ++j) {
                if(guessed[i] == target[j]) {
                    if (i == j) {
                        bull++;
                    } else {
                        cow++;
                    }
                }
            }
        }

        cout << bull << " bulls & " << cow << " cows." << '\n';
    }
    return 0;
}
