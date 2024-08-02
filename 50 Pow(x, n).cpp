#include "headers.h"

double myPow(double x, int n) {
	if (n == 0) return 1;

	double num = 1;
	double cur = x;
	bool negative = n < 0;
	long long nn = n;
	nn *= negative ? -1 : 1;

	while (nn > 0) {
		if (nn & 1) {
			num *= cur;
		}
		cur *= cur;
		nn /= 2;
	}

	return negative ? 1 / num : num;
}

int main() {
	//Input: x = 2.00000, n = 10
	//Output : 1024.00000
	cout << myPow(2, 10) << endl;

	//Input: x = 2.10000, n = 3
	//Output : 9.26100
	cout << myPow(2.1, 3) << endl;

	//Input: x = 2.00000, n = -2
	//Output : 0.25000
	cout << myPow(2, -2) << endl;
}
