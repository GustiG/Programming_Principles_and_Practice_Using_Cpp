#include <iostream>
using namespace std;

int main()
{   
    double dollar = 0;
    constexpr double yen = 0.14;
    constexpr double krone = 0.15;
    constexpr double pound = 1.27;
    char currency = 0;
    double amount = 0;

    cout << "Enter the currency you want to convert (y, k, p) to $: ";
    cin >> currency;
    if (currency == 'y') {
        cout << "Please enter the amount of yen: "; 
        cin >> amount;
        cout << amount << " yen is $ " << amount * yen << '\n';
    } else if (currency == 'k') {
        cout << "Please enter the amount of krone: ";
        cin >>  amount;
        cout << amount << " krone is $ " << amount * krone << '\n';
        
    } else if (currency == 'p') {
        cout << "Please enter the amount of pounds: ";
        cin >> amount;
        cout << amount << " pounds is $ " << amount * pound << '\n';
    } else
        cout << "Please only use 'y' for yen, 'k' for krone and 'p' for pounds.";
    
    return 0;

}