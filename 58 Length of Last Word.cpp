#include <string>
#include <vector>

using namespace std;

int lengthOfLastWord(string s) 
{
	int mlen = 0;
	int len = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		if(s[i] != ' ')
			len++;
		else
		{
			if(len != 0)
				mlen = len;
			len = 0;
		}
	}
	if (len != 0)
		mlen = len;
	return mlen;
}

//#include <iostream>
//
//int main()
//{
//	// 5
//	cout << lengthOfLastWord("Hello World") << endl;
//	// 4
//	cout << lengthOfLastWord("   fly me   to   the moon  ") << endl;
//	// 6
//	cout << lengthOfLastWord("luffy is still joyboy") << endl;
//}