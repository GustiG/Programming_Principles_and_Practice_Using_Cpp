#include <iostream>
using namespace std;

int main() 
{
    int val1, val2;
    cout << "enter two integers: " << '\n';
    cin >> val1 >> val2;
    int big, little;

    if (val1 < val2) {
        cout << val1 << " < " << val2 << '\n';
        big = val2;
        little = val1;
    } else if (val2 < val1) {
        cout << val2 << " < " << val1 << '\n'; 
        big = val1;
        little =  val2;
    } else {
        cout << val1 << " & " << val2 << " are equal.\n";
        big = val1, little = val2;
    }
    
    cout << val1 << " + " <<  val2 << " = " << val1 + val2 << '\n';
    cout << big << " - " << little << " = " << big - little << '\n';
    cout << val1 << " * " << val2 << " = "<< val1 * val2 << '\n';
    cout << big << " / " << little << " = " << big / little << '\n';

    return 0;
}