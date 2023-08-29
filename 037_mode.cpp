#include <iostream>
#include <vector>
using namespace std;

// finding the mode in an array using nested loops -- time complexity of O(n^2) -- inefficient for larger arrays
int main()
{
    vector <int> fibonacci = {1, 1, 2, 3, 5, 8};
    int freq = 0;
    int mode = 0;

    for (int i = 0; i < fibonacci.size(); ++i) {
        int count = 0;                                  // reset count for each element
        for (int j = 0; j < fibonacci.size(); ++j) {
            if (fibonacci[i] == fibonacci[j])
                count++;
        }
        if (count > freq) {
            freq = count;
            mode = fibonacci[i];
        }
    }
    cout << "Mode: " << mode;
    

    return 0;
}