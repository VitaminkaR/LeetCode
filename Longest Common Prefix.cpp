#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
	string cur = "";
	for (size_t i = 0; i < strs.at(0).size(); i++)
	{
		cur += strs.at(0)[i];
		for (size_t j = 0; j < strs.size(); j++)
		{
			for (size_t k = 0; k < cur.size(); k++)
			{
				if (cur[k] != strs.at(j)[k])
					if (cur.size() == 0)
						return "";
					else
					{
						cur.pop_back();
						return cur;
					}
			}
		}
	}
	return cur;
}

//#include <iostream>
//
//int main()
//{
//	//"fl"
//	vector<string> v = vector<string>({ "a" });
//	cout << longestCommonPrefix(v) << endl;
//}