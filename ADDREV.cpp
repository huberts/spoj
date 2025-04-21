#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int reverse(int n) {
	if (n == 0) {
		return 0;
	}
	vector<int> digits;
	while (true) {
		if (n % 10 == 0) {
			n /= 10;
		}
		else {
			break;
		}
	}
	while (n > 0) {
		digits.push_back(n % 10);
		n /= 10;
	}
	int result = 0;
	for (int i = 0; i < digits.size(); ++i) {
		result += digits[i] * pow(10, digits.size() - i - 1);
	}
	return result;
}


void ADDREV_calculateAndPrint(int a, int b) {
	int result = reverse(reverse(a) + reverse(b));
	printf("%d\n", result);
}

int ADDREV() {
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		ADDREV_calculateAndPrint(a, b);
	}
	return 0;
}
