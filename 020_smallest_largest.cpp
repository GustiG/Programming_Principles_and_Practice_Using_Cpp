#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double i1, i2;
    const double epsilon = 0.01; // Define the tolerance for almost equal condition
    double largest = 0;
    double smallest = 0;

    cout << "Write any two numbers to be printed, write any other symbol to stop.\n";
    while (cin >> i1) {
        cout << i1 << " is the smallest so far." <<  '\n';
        cin >> i2;
        if (i2 > i1)
            cout << i2 << " is the largest value so far.\n";
        else if (i2 < i1)
            cout << i2 << " is the smallest value so far.\n";
        if (abs(i1 - i2) < epsilon) {
            cout << i1 << " & " << i2 << " are almost equal\n";
        }
        if (i1 < i2)
            cout <<  i1 << " is the smallest value.\n";
        else if (i1 > i2)
            cout <<  i1 << " is the largest value\n";
        else    
            cout << "The numbers you entered are equal\n";
    }
    return 0;
}
