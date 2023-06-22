//#include "headers.h"
//
//// FUNCTION
//
//int maxSubArray(vector<int>& nums)
//{
//	int msum = nums.at(0), csum = 0, mnsum = nums.at(0);
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		csum += nums.at(i);
//		if(csum < 0)
//			csum = 0;
//		else
//		if(msum < csum)
//			msum = csum;
//		if(nums.at(i) > mnsum)
//			mnsum = nums.at(i);
//	}
//	return (msum > mnsum ? msum : mnsum);
//}
//
/////////////////////////////
//
//// TESTS
//int main()
//{
//	// 6
//	vector<int> nums({ -2, -1 });
//	cout << maxSubArray(nums);
//}