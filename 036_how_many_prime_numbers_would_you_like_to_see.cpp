#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    vector<int> primes;
    int first = 0;

    for (int i = 0; i < 100; i++)
        arr.push_back(i);
    
    cout << "How many prime numbers do you want?: ";
    cin >> first;

    for (int x = 2; x < arr.size(); x++) {
        bool is_prime = true;

        for (int y = 2; y * y <= x; y++)
            if (x % y == 0) {
                is_prime = false;
                break;
            }
            if (is_prime && primes.size() <= first + 1)
                primes.push_back(x);
        }  
        
        cout << "Here are the " << first << " prime numbers: ";
        for (int z = 2; z < primes.size(); z++) {
            cout << primes[z];
            if (z != primes.size() - 1)
                cout << ", ";
            else
                cout << ".";
        }

    return 0;
}