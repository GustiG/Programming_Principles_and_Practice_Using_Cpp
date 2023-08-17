#include <iostream>
using namespace std;

int main()
{
    string user_name;
    cout << "Please enter your first name: ";
    cin >> user_name;
    cout << "Hello, " << user_name << ".\n";
    string first_name;
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Dear " << first_name << ", " << "\n    How are you? I am fine. I miss you.\n";
    string friend_name;
    cout << "Enter another firend's name: " << '\n';
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    char friend_sex = 0;
    cout << "Enter a 'm' or 'f' if your friend is male or female: ";
    cin >> friend_sex;

    if (friend_sex == 'm')
        cout << "\nIf you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "\nIf you see " << friend_name << " please ask her to call me.\n";

    int age = 0;
    cout << "What is " << first_name << "'s age?\n";
    cin >> age;
    cout << "I heard you just had your birthday and you are " << age << " years old.\n";
    if (age < 12)
        cout << "Next year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "Next year you'll be able to vote.\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";

    cout << "Yours sincerely,\n" << user_name;
    
    return 0;
}