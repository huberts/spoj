/*
PRISMA: https://www.spoj.com/problems/PRISMSA/
C++ 14 (gcc 8.3)
Zadanie polega na minimalizacji funkcji powierzchni S znaj¹c sta³¹ objêtoœæ V.
S i V s¹ funkcjami dwóch parametrów: a i h.
1. Okreœlamy h poprzez V i a w postaci: h = 2V / (a^2 * sin60)
2. Okreœlamy S jako funkcjê a: S = a^2 * sin60 + 6V / (a * sin60)
3. Aby zminimalizowaæ S nale¿y obliczyæ pochodn¹ i przyrównaæ j¹ do zera:
S' = 2a * sin60 - 6V / (a^2 * sin60) = 0
4. Po przekszta³ceniach:
a = cbrt( 3V / sin^2(60) ) = cbrt(4 * V)
(gdzie cbrt to pierwiastek szeœcienny)
Ostatecznie w programie obliczamy: d³ugoœæ boku a, a potem powierzchniê S. I drukujemy j¹ na ekran z dok³adnoœci¹ do 10 miejsc po przecinku.
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
