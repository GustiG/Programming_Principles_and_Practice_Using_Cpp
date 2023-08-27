#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> primes;
    vector<int> arr;
    int max = 0;

    cout << "Please declare the length of the list: ";
    cin >> max;

    for (int i = 0; i < max; i++)
        arr.push_back(i);

    cout << "Your list is: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1)
            cout << ", ";
        else
            cout << "."; // if the loop got to the end, add a '.'
    }
    cout << endl;

    for (int j = 2; j < arr.size(); j++) {
        bool is_prime = true;

        for (int k = 2; k * k <= j; k++) {
            if (j % k == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime)
            primes.push_back(j);
    }

    cout << "The prime numbers in your list are: ";
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i];
        if (i != primes.size() - 1)
            cout << ", ";
        else
            cout << ".";
    }

    return 0;
}
