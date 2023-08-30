#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> sequence = {"apple", "banana", "apple", "cherry", "banana", "cherry"};

    sort(sequence.begin(), sequence.end());
    string str_min = sequence[0];
    string str_max = sequence[sequence.size() - 1];
    int freq = 0;
    string mode = sequence[0];

    for (int i = 0; i < sequence.size(); i++) {
        int count = 0;
        for (int j = 0; j < sequence.size(); j++) {
            if (sequence[i] == sequence[j])
                count++;
            if (count > freq) {
                freq = count;
                mode = sequence[i];
        
             }
        }
    }
    cout << "Min: " << str_min << '\n';
    cout << "Max: " << str_max << '\n';
    cout << "Mode: " << mode << '\n';
     

    return 0;
}