#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Function to convert day input to lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main()
{
    vector<string> days { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
    unordered_map<string, string> dayMap;
    for (const string& day : days) {
        // Map various formats to the "official" day name
        dayMap[toLowerCase(day.substr(0, 3))] = day;
        dayMap[toLowerCase(day)] = day;
    }

    vector<string> days_in;
    vector<int> values;
    int rejected_values = 0;

    cout << "Please write the day of the week and its value (q 0 to quit):\n";

    string input_day;
    int input_value;
    int total_values = 0;

    while (cin >> input_day >> input_value)
    {
        // Convert input day to lowercase for case-insensitive comparison
        string lowercased_day = toLowerCase(input_day);

        if (lowercased_day == "q" && input_value == 0)
        {
            for (int i = 0; i < days_in.size(); i++)
            {
                cout << dayMap[days_in[i]] << " : " << values[i] << '\n';
                total_values += values[i];
            }
            cout << "Total values = " << total_values << '\n';
            cout << "Rejected values = " << rejected_values << '\n';
            break;
        }

        // Check if the entered day is valid
        auto it = dayMap.find(lowercased_day);
        if (it != dayMap.end())
        {
            // If valid, push back the "official" day name
            days_in.push_back(it->second);
            values.push_back(input_value);
        }
        else
        {
            cout << "Invalid day entered. Please use a valid day format.\n";
            rejected_values++;
        }
    }

    return 0;
}
