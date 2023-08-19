#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cout << "Spell a number between zero and four: ";
    cin >> num;

    cout << num << " is: ";

    switch (num[0]) {
        case 'z':
            cout << "0";
            break;
        case 'o':
            cout << "1";
            break;
        case 't':
            if (num == "two")
                cout << "2";
            else if (num == "three")
                cout << "3";
            break;
        case 'f':
            if (num == "four")
                cout << "4";
            break;
        default:
            cout << "Invalid input.";
            break;
    }

    cout << ".\n";

    return 0;
}
