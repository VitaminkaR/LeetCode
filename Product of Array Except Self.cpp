//#include "headers.h"
//
//// FUNCTION
//
//vector<int> productExceptSelf(vector<int>& nums) {
//	int size = nums.size();
//	int* lsum = new int[size];
//	int* rsum = new int[size];
//	lsum[0] = nums[0];
//	rsum[0] = nums[size - 1];
//	vector<int> res;
//	for (size_t i = 1; i < size; i++)
//	{
//		lsum[i] = lsum[i - 1] * nums.at(i);
//		rsum[i] = rsum[i - 1] * nums.at(size - 1 - i);
//	}
//
//	res.push_back(rsum[size - 2]);
//	for (size_t i = 1; i < size - 1; i++)
//	{
//		int sum = lsum[i - 1] * rsum[size - 2 - i];
//		res.push_back(sum);
//	}
//	res.push_back(lsum[size - 2]);
//	return res;
//}
//
/////////////////////////////
//
//// TESTS
//int main()
//{
//	// 24 12 8 6
//	vector<int> nums({ 1,2,3,4 });
//	vector<int> res = productExceptSelf(nums);
//	for (size_t i = 0; i < res.size(); i++)
//		cout << res.at(i);
//}