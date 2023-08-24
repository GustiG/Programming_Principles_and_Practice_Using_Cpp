#include <iostream>
#include <vector>
#include <algorithm>  // Required for std::sort
using namespace std;

int main() {
    vector<double> distance;
    cout << "Please enter the distance in km between two cities. Enter any non-numeric value to stop.\n";

    for (double input; cin >> input;) {
        distance.push_back(input);
    }
    
    // Sort the vector
    sort(distance.begin(), distance.end());

    cout << "Sorted distances: ";
    for (int i = 0; i < distance.size(); ++i) {
        cout << distance[i] << "km, ";
    }

    cout << endl;
    cout << "Median distance is: " << distance[distance.size()/2] << "km.\n";

    // Calculate the sum for further operations
    double sum = 0;
    for (double num : distance) sum += num;
    cout << "Average distance is: " << sum/distance.size() << "km\n";
    cout << "The sum of all distances is: " << sum << "km\n";

    // Find the smallest and largest distances
    double smallest = distance[0];
    double largest = distance[distance.size()-1];
    cout << "The smallest distance is: " << smallest << "km.\n";
    cout << "The largest distance is: " << largest << "km.\n";

    return 0;
}
