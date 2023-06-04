#include "headers.h"

// FUNCTION

int compare(const void* x1, const void* x2)
{
	pair<int, int> p1 = (*(pair<int, int>*)x1);
	pair<int, int> p2 = (*(pair<int, int>*)x2);
	return p2.second - p1.second;
}

vector<int> topKFrequent(vector<int>& nums, int k)
{
	unordered_map<int, int> numers;
	vector<int> out;
	for (size_t i = 0; i < nums.size(); i++)
	{
		numers[nums[i]] += 1;
	}

	vector<pair<int, int>> vec;
	for (const auto& element : numers)
		vec.push_back({element.first, element.second});

	qsort(&vec.at(0), vec.size(), sizeof(pair<int, int>), compare);

	for (size_t i = 0; i < k; i++)
	{
		out.push_back(vec.at(i).first);
	}

	return out;
}

///////////////////////////

//// TESTS
//int main()
//{
//	// [1,2]
//	vector<int> vec({ 1,1,1,2,2,3 });
//	topKFrequent(vec, 2);
//}