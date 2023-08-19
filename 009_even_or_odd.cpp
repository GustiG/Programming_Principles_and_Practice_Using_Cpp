#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter an integer: ";
    cin >> num;
    
    if(num % 2 == 0)
        cout << "The value " << num << " is an even number.";
    else
        cout << "The value " << num << " is an odd number.";
    
    return 0;
    
}