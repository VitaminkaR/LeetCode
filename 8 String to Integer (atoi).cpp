#include "headers.h"

// FUNCTION

int myAtoi(string s) 
{
	long long int out = 0;
	int size = s.size();
	char mflag = 0;
	string num = "";
	bool end = 0;

	for (size_t i = 0; i < s.size(); i++)
	{
		if(s[i] == ' ')
			continue;

		// если число началось
		if (s[i] <= '9' && '0' <= s[i])
		{
			for (; i < s.size(); i++)
			{
				if (s[i] <= '9' && '0' <= s[i])
					num += s[i];
				else
				{
					end = 1;
					break;
				}	
			}
		}

		if (end)
			break;

		// если число началось со знака
		if (s[i] == '-' || s[i] == '+')
		{
			if(s[i] == '-')
				mflag = 1;
			i++;
			for (; i < s.size(); i++)
			{
				if (s[i] <= '9' && '0' <= s[i])
					num += s[i];
				else
				{
					end = 1;
					break;
				}
			}
		}

		if(num == "")
			return 0;
		if(end)
			break;
	}

	size = num.size();
	for (size_t i = 0; i < size; i++)
	{
		if (num[i] % '0' * pow(10, size - i - 1) > 2147483647)
		{
			out = 2147483647;
			if(mflag)
				out += 1;
			break;
		}

		out += num[i] % '0' * pow(10, size - i - 1);
	}

	if(mflag)
		out *= -1;

	if(out < -2147483648)
		out = -2147483648;
	if (out > 2147483647)
		out = 2147483647;

	return out;
}

///////////////////////////

//// TESTS
//int main()
//{
//	// 42
//	cout << myAtoi("42") << endl;
//	// 42
//	cout << myAtoi("042") << endl;
//	// -42
//	cout << myAtoi("-42") << endl;
//	// -42
//	cout << myAtoi("-042") << endl;
//	// -42
//	cout << myAtoi("    -42") << endl;
//	// 42
//	cout << myAtoi("42 with words") << endl;
//	// 0
//	cout << myAtoi("+-42") << endl;
//	// 0
//	cout << myAtoi("words and 987") << endl;
//	// 3
//	cout << myAtoi("3.1415") << endl;
//	// -3
//	cout << myAtoi("-3.1415") << endl;
//	// -3
//	cout << myAtoi(" -3 1415") << endl;
//	// 12345678
//	cout << myAtoi("  0000000000012345678") << endl;
//	// 2147483647
//	cout << myAtoi("  20000000000000000000") << endl;
//	// -2147483648
//	cout << myAtoi("  -20000000000000000000") << endl;
//}