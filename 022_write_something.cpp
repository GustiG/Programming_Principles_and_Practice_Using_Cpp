#include <iostream>
using namespace std;

int main() 
{
    string input;
    string bleep = "no";

    cout << "Write something << ";
    cin >> input;

    if (input == "hello")
        cout << "Hello to you too.";
    else if (input == "something")
        cout << "Clever...";
    else if (input == bleep)
        cout << "Pls...";
    else
        cout << "Thanks, bye!";

}