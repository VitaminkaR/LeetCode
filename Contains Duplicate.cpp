//#include "headers.h"
//
//// FUNCTION
//
//bool containsDuplicate(vector<int>& nums) {
//	sort(nums.begin(), nums.end());
//	for (size_t i = 0; i < nums.size() - 1; i++)
//	{
//		if(nums[i] == nums[i+1])
//			return true;
//	}
//	return false;
//}
//
/////////////////////////////
//
//// TESTS
//int main()
//{
//	// 1
//	vector<int> nums({1,2,3,1});
//	cout << containsDuplicate(nums) << endl;
//	nums.clear();
//
//	// 0
//	nums = vector<int>({ 1,2,3,4 });
//	cout << containsDuplicate(nums) << endl;
//	nums.clear();
//}