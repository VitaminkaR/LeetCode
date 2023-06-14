//#include "headers.h"
//
//// FUNCTION
//
//int maxProfit(vector<int>& prices) {
//	int min = prices.at(0), max = prices.at(0), msum = 0;
//
//	for (size_t i = 1; i < prices.size(); i++)
//	{
//		int cur = prices.at(i);
//		if (cur < min)
//		{
//			min = cur;
//			max = cur;
//			continue;
//		}
//
//		if (cur > max)
//			max = cur;
//
//		if (max - min > msum)
//			msum = max - min;
//	}
//
//	return msum;
//}
//
/////////////////////////////
//
//// TESTS
//int main()
//{
//	// 5
//	vector<int> prices({ 7, 1, 5, 3, 6, 4 });
//	cout << maxProfit(prices) << endl;
//	prices.clear();
//
//	// 0
//	prices = vector<int>({ 7,6,4,3,1 });
//	cout << maxProfit(prices) << endl;
//	prices.clear();
//
//	// 4
//	prices = vector<int>({ 7,2,5,3,6,1,4 });
//	cout << maxProfit(prices) << endl;
//	prices.clear();
//}