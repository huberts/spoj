#include <iostream>

void CPTTRN2_calculateAndPrint(int l, int c) {
	bool isFirstLine = false;
	bool isLastLine = false;
	bool isFirstColumn = false;
	bool isLastColumn = false;
	for (int i = 1; i <= l; ++i) {
		isFirstLine = i == 1;
		isLastLine = i == l;
		for (int j = 1; j <= c; ++j) {
			isFirstColumn = j == 1;
			isLastColumn = j == c;
			if (isFirstLine || isLastLine || isFirstColumn || isLastColumn) {
				printf("*");
			}
			else {
				printf(".");
			}
		}
		printf("\n");
	}
	printf("\n");
}

int CPTTRN2() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		int l, c;
		scanf("%d %d", &l, &c);
		CPTTRN2_calculateAndPrint(l, c);
	}
	return 0;
}