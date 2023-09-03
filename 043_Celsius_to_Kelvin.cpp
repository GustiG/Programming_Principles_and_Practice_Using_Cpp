#include <iostream>
using namespace std;

double ctok(double c)       // converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;           // declare inut variable
    cin >> c;               // retrive temperature to inut variable

    if ( c < -273.15) {
        cerr << "Temperature " << c << " degrees Celsius is considered to low.\n";
        return 0;
    }
    double k = ctok(c);     // convert temperature
    cout << k << '\n';      // print out temperature

    return 0;
}