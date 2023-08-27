#include <iostream>
#include <vector>
using namespace std;

// The Sieve of Eratosthenes --  O(n log log n)
int main()
{
    vector<int> primes;
    vector<int> numbers;

    for (int i = 0; i < 100; ++i)
        numbers.push_back(i);
    
    for (int i = 0; i < numbers.size(); ++i ) {
        cout << numbers[i];
        if (i != numbers.size() - 1)
            cout << ", ";
    }

    cout << endl;

    for (int j = 2; j < numbers.size(); j++) {
        bool is_prime = true;

        for (int k = 2; k * k <= j; ++k)
            if (j % k == 0) {
                is_prime = false;
                break;
            }
            
        if (is_prime)
            primes.push_back(j);
    }

    cout << "The prime numbers in the above list are: ";
    for (int k = 2; k < primes.size(); k++){
        cout << primes[k];
        if (k != primes.size() - 1)
            cout << ", ";       
        }


    return 0;
}