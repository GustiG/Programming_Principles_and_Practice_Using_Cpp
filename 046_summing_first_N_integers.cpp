#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int nums;
    int sum = 0;
    int N = -1;

    cout << "How many integers do you want to sum together?\n";
    cin >> N;


    cout << "Please enter a series of integers. Press '|' to stop.\n";
    while (cin >> nums) {
        if (nums == '|')
            break; 
        arr.push_back(nums);
    }
        cout << "Your integers are: ";
        for (int i = 0; i < arr.size(); ++i) {
            cout << arr[i];
            if (i < arr.size() -1)
                cout << ", ";
            else    
                cout <<".\n";
        }


        if (N > arr.size()) {
            cerr << "There aren't that many numbers in your list.\n";
            return 1;
        }

        for (int i = 0; i < N; ++i) {
            sum += arr[i];
        }

        cout << "The sum of your first " << N << " integers is: " << sum << ".\n";
   
    return 0;
}