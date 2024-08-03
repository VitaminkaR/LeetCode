#include "headers.h"

vector<string> getLetters(char digit) {
	vector<string> out;
	int num = digit - 48;
	int f = (num - 2) * 3 + 98;
	string str = "";

	if (num >= 8)
		f += 1;

	str += (char)(f - 1); out.push_back(str);
	str = ""; str += (char)(f); out.push_back(str);
	str = ""; str += (char)(f + 1); out.push_back(str);
	if (num == 7) {
		str = ""; str += (char)(f + 2); out.push_back(str);
	}
	if (num == 9) {
		str = ""; str += (char)(f + 2); out.push_back(str);
	}
	return out;
}

vector<string> letterCombinations(string digits) {
	vector<string> out;

	if (digits == "")
		return out;

	vector<string> cur_letters;

	cur_letters = getLetters(digits[0]);
	out.push_back(cur_letters[0]);
	out.push_back(cur_letters[1]);
	out.push_back(cur_letters[2]);
	if(cur_letters.size() == 4)
		out.push_back(cur_letters[3]);

	for (size_t i = 1; i < digits.size(); i++) 
	{
		cur_letters = getLetters(digits[i]);
		vector<string> cur_out = out;
		for (size_t j = 0; j < cur_out.size(); j++)
		{
			for (size_t k = 0; k < cur_letters.size(); k++)
			{
				out.push_back(cur_out[j] + cur_letters[k]);
			}
			out.erase(out.begin());
		}
	}

	return out;
}

int main() {
	//Input: digits = "23"
	//Output : ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"]
	vector<string> x = letterCombinations("9");
}
