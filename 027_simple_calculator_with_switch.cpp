#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two doubles and an operator sign to perform the calculation.\n";
    double unu, doi;
    char op;
    cin >> unu >> doi >> op;

    switch(op) {
        case '+':
        cout << unu + doi << '\n';
        break;

        case '-':
        cout << unu - doi << '\n';
        break;

        case '*':
        cout << unu * doi << '\n';
        break;

        case '/':
        cout << unu / doi << '\n';
        break;
    }
    return 0;
}