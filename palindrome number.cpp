bool isPalindrome(int x) 
{
	if(x < 0)
		return false;
	if (x < 10)
		return true;

	long long int xt = x;
	long long int y = 0;
	while (xt)
	{
		y = y*10+xt%10;
		xt /= 10;
	}

	return x==y;
}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	for (size_t i = 0; i < 1000; i++)
//	{
//		if(isPalindrome(i))
//			cout << i << " is true\n";
//	}
//}