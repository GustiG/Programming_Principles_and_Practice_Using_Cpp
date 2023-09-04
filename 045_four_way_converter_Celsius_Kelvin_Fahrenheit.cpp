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

double ftoc(double f) {
    double h = (f - 32.0) * 5.0 / 9.0;
    return h;
}

double ctof(double e) {
    double f = e * (9.0 / 5.0) + 32.0;
    return f;
}

int main()
{
    char answer;
    cout << "To convert from Celsius to Kelvin --> Press 'c'\nTo convert from Kelvin to Celsius --> Press 'k'\n";
    cout << "To convert from Celsius to Fahrenheit --> Press 'e'\nTo convert from Fahrenheit to Celsius --> Press 'f'\nPress 'q' to quit.\n";

    while (cin >> answer) {
        if (answer != 'c' && answer != 'k' && answer != 'e' && answer != 'f') {
            
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

        if (answer == 'e') {
            double e;
            cout << "Please enter the temperature in Celsius: ";
            cin >> e;
            double f = ctof(e);
            cout << e << " degrees Celsius are " << f << " degrees Fahrenheit.\n";
        }

        if (answer == 'f') {
            double f;
            cout << "Please enter the temperature in Fahrenheit: ";
            cin >> f;
            double h = ftoc(f);
            cout << f << " degrees Fahrenheit are " << h << " degrees Celsius.\n";
        }
    }
    return 0;
}