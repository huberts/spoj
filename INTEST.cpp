#include <iostream>

using namespace std;

int INTEST() {
	int count, k;
	int o = 0;
	scanf("%d %d", &count, &k);
	for (int i = 0; i < count; ++i) {
		int n;
		scanf("%d", &n);
		if (n % k == 0) {
			o++;
		}
	}
	printf("%d", o);
	return 0;
}