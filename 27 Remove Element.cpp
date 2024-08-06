#include "headers.h"

int removeElement(vector<int>& nums, int val) {
	vector<int> _nums;

	for (size_t i = 0; i < nums.size(); i++)
	{
		int _val = nums.at(i);
		if (_val != val)
			_nums.push_back(_val);
	}

	nums = _nums;
	return _nums.size();
}

int main() {
	vector<int> vec = { 2, 5, 3, 1, 6, 3, 2, 3, 2, 8, 5, 3, 9 ,1 };
	int x = removeElement(vec, 3);
}
