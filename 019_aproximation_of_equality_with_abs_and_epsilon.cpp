#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double i1, i2;
    const double epsilon = 0.01; // Define the tolerance for almost equal condition

    cout << "Write any two numbers to be printed, write any other symbol to stop.\n";
    while (cin >> i1 >> i2) {
        cout << i1 << ", " << i2 << '\n';
        if (abs(i1 - i2) < epsilon) {
            cout << i1 << " & " << i2 << " are almost equal\n";
        }
        if (i1 < i2)
            cout << "the smaller value is: " << i1 << "\nthe larger value is: " << i2 << '\n';
        else if (i1 > i2)
            cout << "the smaller value is: " << i2 << "\nthe larger value is: " << i1 << '\n';
        else    
            cout << "The numbers you entered are equal\n";
    }
    return 0;
}
