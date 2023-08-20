#include <iostream>
using namespace std;

int main()
{
    char c = 'a';
    int i = 0;
    while (i < 26) {
        ++i;
        
        cout << c << '\t' << int(c) << '\n';
        c++;
    }
}