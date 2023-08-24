#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in ("032_prime_number_checker.cpp");
    ofstream out("033_prime_number_max_input.cpp");
    string s;
    while(getline(in, s))
        out << s << '\n';


    return 0;
}