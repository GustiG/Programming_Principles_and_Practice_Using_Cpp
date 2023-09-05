#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> arr;
    vector<double> diff;
    double input;

    cout << "Enter some floating-point values:\nType 'q' to quit.\n";

    while (cin >> input) {
        if (cin.peek() == 'q')
            break;

        arr.push_back(input);
    }

    cout << "Your entered values are: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1)
            cout << ", ";
        else
            cout << ".\n";
    }

    cout << "The difference between those values is: ";
    for (int i = 0; i < arr.size() - 1; ++i) {
        double minus = arr[i] - arr[i + 1];
        diff.push_back(minus);
        cout << diff[i];
        if (i < arr.size() - 2)
            cout << ", ";
        else
            cout << ".\n";
    }

    return 0;
}
