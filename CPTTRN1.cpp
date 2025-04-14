#include <iostream>

void CPTTRN1_calculateAndPrint(int l, int c) {
	bool evenLine = false;
	bool evenColumn = false;
	for (int i = 1; i <= l; ++i) {
		evenLine = i % 2 == 0;
		for (int j = 1; j <= c; ++j) {
			evenColumn = j % 2 == 0;
			if (evenLine && evenColumn || !evenLine && !evenColumn) {
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

int CPTTRN1() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		int l, c;
		scanf("%d %d", &l, &c);
		CPTTRN1_calculateAndPrint(l, c);
	}
	return 0;
}