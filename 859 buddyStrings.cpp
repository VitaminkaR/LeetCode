#include <string>

using namespace std;

bool buddyStrings(string s, string goal)
{
	int errors = 0;
	int norig = 0;
	int str[26]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int gstr[26]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	bool letters_check = true;

	if(s.size() != goal.size())
		return false;

	for (size_t i = 0; i < s.size(); i++)
	{
		str[s[i] % 'a'] += 1;
		gstr[goal[i] % 'a'] += 1;
		if(s[i] != goal[i])
			errors += 1;
	}

	for (size_t i = 0; i < 26; i++)
	{
		if (str[i] != gstr[i])
		{
			letters_check = false;
			break;
		}
	}

	if(!letters_check)
		return false;
	if(errors == 2)
		return true;
	if(errors > 2 || errors == 1)
		return false;

	for (size_t i = 0; i < s.size(); i++)
	{
		for (size_t j = 0; j < s.size(); j++)
		{
			if(i != j && s[i] == s[j])
				return true;
		}
	}

	return false;
}

//#include <iostream>
//
//int main()
//{
//	//"true"
//	cout << buddyStrings("ab", "ba") << endl;
//	//"false"
//	cout << buddyStrings("ab", "ab") << endl;
//	//"true"
//	cout << buddyStrings("aa", "aa") << endl;
//	//"false"
//	cout << buddyStrings("abcaa", "abcbb") << endl;
//	//"false"
//	cout << buddyStrings("ab", "babbb") << endl;
//}