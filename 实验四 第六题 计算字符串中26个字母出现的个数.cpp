#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string input;
	int counts[26];
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	cout << "Input a string of letters: " << endl;
	getline(cin, input);
	for (char ch : input) // This sentence is used to ergodic each element in an array or string.
	{
		char lowerCh = tolower(static_cast <unsigned char>(ch));
		if (lowerCh >= 'a' && lowerCh <= 'z')
			counts[lowerCh - 'a']++;
	}
	for (char ch = 'a'; ch <= 'z'; ++ch)
	{
		if (counts[ch - 'a'] == 0)
			continue; // If this condition is true, do no operation and directly jump to the next sentence.
		else
			cout << ch << ":" << counts[ch - 'a'] << endl;
	}
	return 0;
}