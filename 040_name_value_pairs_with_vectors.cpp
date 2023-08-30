#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> names;
    vector<int> numbers;
    string name; 
    int score;

    cout << "Add a name and a score below:\n";
    while (cin >> name >> score) {
        if (name == "noname" && score == 0) 
            break;

            if (find(names.begin(), names.end(), name) != names.end()) {
            cout << "Name must be unique. This name is already in the list.\n";
            continue;
            }
            names.push_back(name);
            numbers.push_back(score);      
      
        }
    cout << "name & score:\n";
    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << " " << numbers[i] << "\n";
    }

    string answer;
    cout << "Would you like to search for a name in the list? ";
    cin >> answer;
    
    if (answer == "yes" || answer == "yea" || answer == "ye" || answer == "y" || answer == "da") {
        string find_name;
        cout << "Please enter the name: ";
        cin >> find_name;

        auto name_finder = find(names.begin(), names.end(), find_name);
        if (name_finder != names.end()) {
            size_t index = distance(names.begin(), name_finder);
            cout << "Score for " << find_name << ": " << numbers[index] << endl;
        } else {
            cout << "Name not found in the list.\n";
        }
    } else if (answer == "no" || answer == "n" || answer == "nah" || answer == "nu") {
        cout << "Do you want to search for a score instead? ";
        cin >> answer;
        if (answer == "yes" || answer == "yea" || answer == "ye" || answer == "y" || answer == "da") {
            int find_score = 0;
            cout << "Please enther the score: ";
            cin >> find_score;

            bool found = false;
            cout << "Names for score " << find_score << ": ";
                for (size_t i = 0; i < numbers.size(); ++i) {
                    if (numbers[i] == find_score) {
                    found = true;
                    cout << names [i];
                    if (i < names.size() - 1) 
                        cout << ", " ;
                     else
                        cout << ".\n";
                    }
                }
             if (!found) {
                cout << "Score not found.\n";
            }
            
        }
    }
    return 0;
}
