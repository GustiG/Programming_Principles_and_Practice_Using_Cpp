#include <iostream>
using namespace std;

int main() {
    int pennies, nickels, dimes, quarters, half, ones;
    double total;
    cout << "pennies: ";
    cin >> pennies;
    cout << "nickels: ";
    cin >> nickels;
    cout << "dimes: ";
    cin >> dimes;
    cout << "quarters: ";
    cin >> quarters;
    cout << "half-dollars: ";
    cin >> half;
    cout << "dollars: ";
    cin >> ones;
    total = pennies + nickels*5 + dimes*10 + quarters*25 + half*50 + ones*100;
    cout << "You have: " << pennies << " pennies.\n" << nickels << " nickels.\n" << dimes << " dimes.\n"
        << quarters << " quarters.\n" << half << " half dollars.\n" << ones << " dollars.\n";
    cout << "The value of all your coins is " << total << " cents.\nOr " << "$" << total/100;

    return 0;
}