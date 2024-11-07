#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int letter = 0;
    int digit = 0;
    int space = 0;
    int special_char = 0;
    for (char ch : str)
    {
        if (isupper(ch))
            letter++;
        else if (islower(ch))
            letter++;
        else if (isdigit(ch))
            digit++;
        else if (isspace(ch))
            space++;
        else
            special_char++;
    }
    cout << "Letters: " << letter << endl;
    cout << "Digits: " << digit << endl;
    cout << "Spaces: " << space << endl;
    cout << "Special characters: " << special_char << endl;
    return 0;
}