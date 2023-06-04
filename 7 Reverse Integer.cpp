#include "headers.h"

// FUNCTION

int reverse(int x)
{
	long long int n = x;
	if (n < 0)
	{
		n *= -1;
	}

	long long int xt = n;
	n = 0;
	while (xt)
	{
		n = n * 10 + xt % 10;
		xt /= 10;
	}
	
	if(n >> 31 != 0)
		return 0;

	return (x < 0 ? n * -1 : n);
}

///////////////////////////

// TESTS
//int main()
//{
//	//123 = 321
//	cout << reverse(123) << endl;
//	//-123 = -321
//	cout << reverse(-123) << endl;
//	//120 = 21
//	cout << reverse(120) << endl;
//	//1534236469 = 0
//	cout << reverse(1534236469) << endl;
//	//1563847412 = 0
//	cout << reverse(1563847412) << endl;
//}