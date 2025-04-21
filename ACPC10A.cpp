#include <iostream>
using namespace std;

void ACPC10A_calculateAndPrint(int a, int b, int c) {
	if (b - a == c - b) {
		cout << "AP " << (c + (b - a)) << endl;
	}
	else if (b / a == c / b) {
		cout << "GP " << (c * (b / a)) << endl;
	}
}


int ACPC10A() {
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		ACPC10A_calculateAndPrint(a, b, c);
	}
	return 0;
}