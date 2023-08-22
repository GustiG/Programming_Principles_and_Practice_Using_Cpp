#include <iostream>
using namespace std;

void square(int x)
{
    // cout << x << '\t' << x*x << '\n';    in the exercise you need to define the function without the use of multiplication.
    int result = 0;
    for (int i = 0; i < x; ++i) {
        result += x;
    }
    cout << x << '\t' << result << '\n';    // needs to be outside the loop so it won't print the same result multiple times.

}

int main()
{
    for (int i = 0; i < 100; ++i)
        square(i);

    return 0;
}