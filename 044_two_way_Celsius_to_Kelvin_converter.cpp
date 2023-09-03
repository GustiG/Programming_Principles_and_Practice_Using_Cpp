
#include <iostream>
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

double ktoc(double k) {
    double c = k - 273.15;
    return c;
}

int main()
{
    char answer;
    cout << "To convert from Celsius to Kelvin --> Press 'c'\nTo convert from Kelvin to Celsius --> Press 'k'\nPress 'q' to quit.\n";

    while (cin >> answer) {
        if (answer != 'c' && answer != 'k') {
            
            if (answer == 'q') {
                cout << "Bye!\n";
                break;
            }
            cout << "Invalid input, please only use 'c' or 'k'\n";
            continue;
        }


        if (answer == 'c') {
            double c;
            cout << "Please enter the temperature in Celsius: ";
            cin >> c;
            double k = ctok(c);
            cout << c << " degrees Celsius are " << k << " degrees Kelvin.\n";
        } 

        if (answer == 'k') {
            double k;
            cout << "Please enter the temperature in Kelvin: ";
            cin >> k;
            double c = ktoc(k);
            cout << k << " degrees Kelvin are " << c << " degrees Celsius.\n";
        }
    }
    return 0;
}