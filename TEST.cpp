/*
TEST: https://www.spoj.com/problems/TEST/
C++ 14 (gcc 8.3)
W zadaniu drukujemy liczby na wyj�cie tak d�ugo, a� nie b�dzie to warto�� 42 (uniwersalna odpowied� na wszystko).
Wtedy - nie drukujemy, tylko ko�czymy program.
*/

#include <iostream>
using namespace std;

int TEST() {
	while (true)
	{
		int i;
		scanf("%d", &i);
		if (i == 42)
		{
			break;
		}
		else {
			printf("%d\n", i);
		}
	}
	return 0;
}
