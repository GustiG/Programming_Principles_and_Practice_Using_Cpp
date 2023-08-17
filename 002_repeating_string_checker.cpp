#include <iostream>
using namespace std;

int main()
{
    int number_of_words = 0;
    string previous = " ";      // previous word; initialized to "not a word"
    string current;             // current word
    while(cin >> current) {     
        ++number_of_words;      // increase word count
        if(previous==current)   
            cout << "word number " << number_of_words << " repeated: " << current << '\n';
        previous = current;
    }
    return 0;
    
}
// use the sentence: She she laughed He He He because what he did did not look very very good good