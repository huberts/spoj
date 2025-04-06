/*
DIVSUM: https://www.spoj.com/problems/DIVSUM/
C++ 14 (gcc 8.3)
W zadaniu szukamy sumy wszystkich dzielnik�w liczby n, nie uwzgl�dniaj�c tej liczby w sumie (np. dla 12 uwzgl�dniamy dzielniki 1, 2, 3, 4, 6, ale nie 12).

Na pocz�tek obliczamy pierwiastek kwadratowy z n (sqrt) = sq.
W przedziale od 1 do sq sprawdzamy, kt�ra z liczb dzieli n bez reszty (operacja modulo 0).
W przypadku znalezienia takiej liczby k, do wyniku dodajemy j� sam� oraz wynik z dzielenia n / k, kt�ry r�wnie� jest dzielnikiem.
Badamy tylko do pierwiastka, bo wszystkie nast�pne liczby po pierwiastku ju� pojawi�y si� w wynikach dziele� n / k.
Na koniec - odejmujemy od wyniku warto�� n wynikaj�c� z nadmiarowego przypisania, gdy k = 1.
Dodatkowo obs�ugujemy warunek brzegowy - je�li n jest kwadratem liczby ca�kowitej (n = sq * sq), to dla k = sq przypisali�my sq dwukrotnie:
odejmujemy jedno sq od wyniku.
*/

#include <iostream>
#include <cmath>

using namespace std;

void DIVSUM_calculateAndPrint(int n) {
	int sum = 0;
	int sq = sqrt(n);
	for (int k = 1; k <= sq; ++k) {
		if (n % k == 0) {
			sum += k + n / k;
		}
	}
	sum -= n;
	if (sq * sq == n) {
		sum -= sq;
	}
	printf("%d\n", sum);
}

int DIVSUM() {
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; ++i) {
		int n;
		scanf("%d", &n);
		DIVSUM_calculateAndPrint(n);
	}
	return 0;
}
