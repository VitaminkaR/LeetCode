#include "headers.h"

bool isValid(string s) {
	string expected = "";

	if (s.size() == 1 || s.at(0) == ')' || s.at(0) == ']' || s.at(0) == '}')
		return false;

	for (size_t i = 0; i < s.size(); i++)
	{
		char x = s.at(i);
		if (x == '(' || x == '[' || x == '{') {
			expected += x;
			continue;
		}

		if (x == ')' && expected.size() > 0 && expected.back() == '(') {
			expected.pop_back();
			continue;
		}
		else if (x == ')') return false;

		if (x == ']' && expected.size() > 0 && expected.back() == '[') {
			expected.pop_back();
			continue;
		}
		else if (x == ']') return false;

		if (x == '}' && expected.size() > 0 && expected.back() == '{') {
			expected.pop_back();
			continue;
		}
		else if (x == '}') return false;
	}

	if (expected.size() == 0)
		return true;
	
	return false;
}

int main() {
	cout << isValid("(){}}{");
}
