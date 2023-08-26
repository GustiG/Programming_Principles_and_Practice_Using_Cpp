#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> primes;

    for (int i = 2; i < 100; ++i) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(i);
        }
    }

    for (int i = 0; i < primes.size(); ++i) {
        cout << primes[i];
        if (i != primes.size() - 1) {       // separate the numbers by ',' unless the number is the last.
            cout << ", ";
        }
    }

    return 0;
}

