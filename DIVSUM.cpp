/*
DIVSUM: https://www.spoj.com/problems/DIVSUM/
C++ 14 (gcc 8.3)
W zadaniu szukamy sumy wszystkich dzielników liczby n, nie uwzglêdniaj¹c tej liczby w sumie (np. dla 12 uwzglêdniamy dzielniki 1, 2, 3, 4, 6, ale nie 12).

Na pocz¹tek obliczamy pierwiastek kwadratowy z n (sqrt) = sq.
W przedziale od 1 do sq sprawdzamy, która z liczb dzieli n bez reszty (operacja modulo 0).
W przypadku znalezienia takiej liczby k, do wyniku dodajemy j¹ sam¹ oraz wynik z dzielenia n / k, który równie¿ jest dzielnikiem.
Badamy tylko do pierwiastka, bo wszystkie nastêpne liczby po pierwiastku ju¿ pojawi³y siê w wynikach dzieleñ n / k.
Na koniec - odejmujemy od wyniku wartoœæ n wynikaj¹c¹ z nadmiarowego przypisania, gdy k = 1.
Dodatkowo obs³ugujemy warunek brzegowy - jeœli n jest kwadratem liczby ca³kowitej (n = sq * sq), to dla k = sq przypisaliœmy sq dwukrotnie:
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
