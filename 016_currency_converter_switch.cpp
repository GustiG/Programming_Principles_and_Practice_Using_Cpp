#include <iostream>
using namespace std;

int main()
{   
    double dollar = 0;
    constexpr double yen = 0.0068;
    constexpr double krone = 0.15;
    constexpr double pound = 1.27;
    constexpr double yuan = 0.94;  // Conversion rate from yuan to kroner
    char currency = 0;
    double amount = 0;

    cout << "Enter the currency you want to convert (y, k, p) to $";
    cout << "\nAlternatively you can convery yuan to krone by typing 'c' >> ";
    cin >> currency;
    switch (currency) {
        case 'y': 
            cout << "Please enter the amount of Jappanesse Yen: "; 
            cin >> amount;
            cout << amount << " yen is $ " << amount * yen << '\n';
            break;

        case 'k':
            cout << "Please enter the amount of Danish Krone: ";
            cin >>  amount;
            cout << amount << " krone is $ " << amount * krone << '\n';
            break;

        case 'p':
            cout << "Please enter the amount of Pounds sterling: ";
            cin >> amount;
            cout << amount << " pounds is $ " << amount * pound << '\n';
            break;

        case 'c':
            cout << "Please enter the amount of Chinesse Yuan: ";
            cin >> amount;
            cout << amount << " yuan is " << amount * yuan << " krone.\n";
            break;

        default:
            cout << "Please only use 'y' for yen, 'k' for krone, 'p' for pounds, or 'c' for yuan to krone.";
            break;
    }

    return 0;
}
