#include <iostream>
using namespace std;

int main()
{
    char c = 'a';
    char C = 'A';
   
    for (int i = 0; i < 26; ++i) {
        cout << c << '\t' << int(c) << '\n';
        cout << C << '\t' << int(C) << '\n';
        c++; C++;
       
    }
    return 0;
}
