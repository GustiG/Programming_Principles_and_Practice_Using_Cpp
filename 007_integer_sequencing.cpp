#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int unu, doi, trei;

    if (a < b && a < c) {
        unu = a;
        if (b < c) {
            doi = b;
            trei = c;
        } else {
            doi = c;
            trei = b;
        }
    } else if (b < a && b < c) {
        unu = b;
        if (a < c) {
            doi = a;
            trei = c;
        } else {
            doi = c;
            trei = a;
        }     
    } else if (c < a && c < b) {
        unu = c;
        if (a < b) {
            doi = a;
            trei = b;
        } else {
            doi = b;
            trei = a;
        }
    }

    cout << "Here they are sorted: " << unu << ", " << doi << ", " << trei << "." << '\n'; 

    return 0;
}
