#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nn half of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
            << '\n'; 
}