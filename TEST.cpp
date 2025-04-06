/*
TEST: https://www.spoj.com/problems/TEST/
C++ 14 (gcc 8.3)
W zadaniu drukujemy liczby na wyjœcie tak d³ugo, a¿ nie bêdzie to wartoœæ 42 (uniwersalna odpowiedŸ na wszystko).
Wtedy - nie drukujemy, tylko koñczymy program.
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
