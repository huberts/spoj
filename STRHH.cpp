#include <iostream>
using namespace std;

int STRHH_main() {
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; ++i) {
		char str[200];
		scanf("%s", str);
		int length = 0;
		for (int j = 0; j < 200; ++j) {
			if (str[j] == '\0') {
				length = j;
				break;
			}
		}
		for (int j = 0; j < (length+2) / 4; ++j) {
			printf("%c", str[2 * j]);
		}
		printf("\n");
	}
	return 0;
}