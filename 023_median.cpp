#include <iostream>
#include <vector>
#include <algorithm>  // Required for sorting the vector
using namespace std;

int main() {
    vector<double> v;
    v.push_back(2.7);
    v.push_back(5.6);
    v.push_back(7.9);
    // If you want to add your own numbers, making this a median calculator, comment the three push_back lines above and uncomment the for loop below

    //for (double input; cin >> input;)
    //     v.push_back(input);    // add any symbol to end the loop



    // Sort the vector in ascending order
    sort(v.begin(), v.end());

    double median = 0;

    if (v.size() % 2 == 0) {
        // If the number of elements is even, median is the average of the two middle elements
        size_t middle1 = v.size() / 2 - 1;
        size_t middle2 = v.size() / 2;
        median = (v[middle1] + v[middle2]) / 2;
    } else {
        // If the number of elements is odd, median is the middle element
        size_t middle = v.size() / 2;
        median = v[middle];
    }

    cout << "Sorted vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }

    cout << "\nThe median of the vector is: " << median << '\n';
}
