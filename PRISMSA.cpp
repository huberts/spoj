/*
PRISMA: https://www.spoj.com/problems/PRISMSA/
C++ 14 (gcc 8.3)
Zadanie polega na minimalizacji funkcji powierzchni S znaj�c sta�� obj�to�� V.
S i V s� funkcjami dw�ch parametr�w: a i h.
1. Okre�lamy h poprzez V i a w postaci: h = 2V / (a^2 * sin60)
2. Okre�lamy S jako funkcj� a: S = a^2 * sin60 + 6V / (a * sin60)
3. Aby zminimalizować S należy obliczyć pochodną i przyr�wna� j� do zera:
S' = 2a * sin60 - 6V / (a^2 * sin60) = 0
4. Po przekszta�ceniach:
a = cbrt( 3V / sin^2(60) ) = cbrt(4 * V)
(gdzie cbrt to pierwiastek sze�cienny)
Ostatecznie w programie obliczamy: d�ugo�� boku a, a potem powierzchni� S. I drukujemy j� na ekran z dok�adno�ci� do 10 miejsc po przecinku.
*/

#include <iostream>
#include <cmath>

using namespace std;
static const double sin60 = sin(60 * 3.141592653589793 / 180);

void PRISMSA_calculateAndPrint(double V) {
	double a = cbrt((4 * V));
	double S = a * a * sin60 + 6 * V / a / sin60;
	printf("%.10f\n", S);
}

int PRISMSA() {
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; ++i) {
		int v;
		scanf("%d", &v);
		PRISMSA_calculateAndPrint(v);
	}
	return 0;
}
