#include <string>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	vector<int> ar1;
	vector<int> ar2;
	ListNode* out = new ListNode();
	ListNode* cur = l1;
	while (cur != NULL)
	{
		ar1.push_back(cur->val);
		cur = cur->next;
	}
	cur = l2;
	while (cur != NULL)
	{
		ar2.push_back(cur->val);
		cur = cur->next;
	}

	int t = 0;
	int i = 0;
	cur = out;
	while (true)
	{
		int a = ar1.size() > i ? ar1.at(i) : 0;
		int b = ar2.size() > i ? ar2.at(i) : 0;
		int sum = a + b + t;
		t = 0;
		if (sum >= 10)
			t = 1;
		cur->val = sum % 10;
		if (ar1.size() - 1 > i || ar2.size() - 1 > i || t)
		{
			cur->next = new ListNode();
			cur = cur->next;
		}
		else
			break;
		i++;
	}

	return out;
}

//#include <iostream>
//
//int main()
//{
//	// test case l1 = [2,4,3], l2 = [5,6,4]     out = [7,0,8]
//	/*ListNode *l1 = new ListNode(
//		2,
//		new ListNode(
//			4,
//			new ListNode(
//				3
//			)
//		)
//	);
//
//	ListNode* l2 = new ListNode(
//		5,
//		new ListNode(
//			6,
//			new ListNode(
//				4
//			)
//		)
//	);*/
//
//	// test case l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]     out = [8,9,9,9,0,0,0,1]
//	/*ListNode* l1 = new ListNode(0);
//	ListNode* l2 = new ListNode(0);*/
//
//	// test case l1 = [2,4,3], l2 = [5,6,4]     out = [7,0,8]
//	ListNode* l1 = new ListNode(
//		9,
//		new ListNode(
//			9,
//			new ListNode(
//				9,
//				new ListNode(
//					9,
//					new ListNode(
//						9,
//						new ListNode(
//							9,
//							new ListNode(
//								9
//							)
//						)
//					)
//				)
//			)
//		)
//	);
//
//	ListNode* l2 = new ListNode(
//		9,
//		new ListNode(
//			9,
//			new ListNode(
//				9,
//				new ListNode(
//					9
//				)
//			)
//		)
//	);
//
//	addTwoNumbers(l1, l2);
//	delete l1;
//	delete l2;
//}