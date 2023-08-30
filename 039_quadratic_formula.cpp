#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main ()
{
    double a, b, c;
    cout << "Quadratic ecuation: ax² + bx + c = 0\n"; 
    cout << "Quadratic formula : x = (-b ± √(b² - 4ac)) / 2a\n";
    cout << "Enter a, b, c to solve the quadratic equation: ";
    cin >> a >> b >> c;

    double square_root = b * b - 4 * a * c;
    if (square_root > 0) {
        double solution1 = (-b + sqrt(square_root)) / 2 * a;
        double solution2 = (-b - sqrt(square_root)) / 2 * a;
        cout << "Solution 1: " << solution1 << '\n' << "Solution 2: " << solution2 << '\n';
    } else if (square_root == 0) {
        double solution_zero = -b / (2 * a);
        cout << "One real root repeated: " << solution_zero << '\n';
    } else 
        cout << "No real solution found because √(b² - 4ac) is a negative number.'\n'This solution will require imaginary numbers.";
    
    return 0;
}