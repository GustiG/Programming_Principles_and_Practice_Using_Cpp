#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   
    const double epsilon = 0.01; // Define the tolerance for almost equal condition
    double largest = 0;
    double smallest = 0;
    
    constexpr double centimeter = 1;
    constexpr double meter = 100;
    constexpr double inch = 2.54 ;
    constexpr double feet = 304.8;
    double sum;


    vector <double> len;
    string unit;
    double num;

    cout << "Write a number followed by a unit of measure from (cm, m, in, ft): ";
    for (int i = 0; i < 4; ++i) {
        cin >> num >> unit;
        if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft") {
            cout << "Please refer only to the units mentioned above.\n";
            --i; // Decrement the index to re-read the current input
        } else {
            if (unit == "cm") {
                num /= meter;
            } else if (unit == "in") {
                num /= inch;
            } else if (unit == "ft") {
                num /= feet;
            }
            len.push_back(num);
            sum += num;
        }
    }

    // Display the smallest and largest lengths
    if (!len.empty()) {
        cout << "Smallest converted length in meters: " << len.front() << '\n';
        cout << "Largest converted length in meters: " << len.back() << '\n';
    } else {
        cout << "No valid lengths entered.\n";
    }

    // Sort the converted lengths
    sort(len.begin(), len.end());

    cout << "Sorted converted lengths in meters: ";
    for (double val : len) {
        cout << val << " ";
    }
    cout << "\nThe sum in meters is: " << sum << '\n';

    return 0;
}
