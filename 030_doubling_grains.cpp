#include <iostream>
using namespace std;

int main()
{
    unsigned long long grains = 1;  // Use a larger data type to handle large numbers
    constexpr int squares = 64;
    
    for (int index = 0; index < squares; index++) {
        cout << "Square " << index + 1 << ": " << grains << " grains" << endl;
        grains *= 2;  // Double the grains on each square
    }
    
    return 0;
}
