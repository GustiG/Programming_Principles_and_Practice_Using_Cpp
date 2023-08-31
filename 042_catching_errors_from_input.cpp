#include <iostream>
using namespace std;

double some_function()
{
    double d = 0;
    cin >> d;
    if (!cin) cerr << "Couldn't read a double in 'some_function()'\n";
    return d;
}

int main()
{
    double value = some_function(); // Call the function and store the returned value
    cout << "Value entered: " << value << endl; // Display the entered value
    return 0;
}