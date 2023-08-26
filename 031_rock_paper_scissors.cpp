#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> rps = {
        "paper", "scissors", "rock"
    };
    
    vector<int> comp; 
    int input = 0;
    
    cout << "Enter three numbers from 0-9: ";

    for (int i = 0; i < 3; ++i) {
        cin >> input;
        comp.push_back(input % 3);
    }
    
    for(int i = 0; i < 3; ++i) {
        cout << "Now choose between 'R'ock, 'P'aper, or 'S'cissors: ";
        char user;
        cin >> user;

        switch(user) {
            case 'R':
            case 'r':
                cout << "My choice is... " << rps[comp[i]] << '\n';
                if (rps[comp[i]] == "paper")
                    cout << "I win.\n";
                else if (rps[comp[i]] == "rock")
                    cout << "You win.\n";
                else    
                    cout << "Tie.\n";
                break;
            case 'P':
            case 'p':
                cout << "My choice is... " << rps[comp[i]] << '\n';
                if (rps[comp[i]] == "scissors")
                    cout << "I win.\n";
                else if (rps[comp[i]] == "rock")
                    cout << "You win.\n";
                else    
                    cout << "Tie.\n";
                break;
            case 'S':
            case 's':
                cout << "My choice is... " << rps[comp[i]] << '\n';
                if (rps[comp[i]] == "rock")
                    cout << "I win.\n";
                else if (rps[comp[i]] == "paper")
                    cout << "You win.\n";
                else
                    cout << "Tie.\n";
                break;
            default:
                cout << "Invalid choice. Please choose 'R', 'P', or 'S'.\n";
        }
        
    }

    return 0;
}
