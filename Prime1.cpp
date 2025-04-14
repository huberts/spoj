#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Prime1 {
public:
	Prime1() {
		calculatePrimes();
	}

	void calculateAndPrint(unsigned long m, unsigned long n) {
		std::vector<unsigned long> primes = calculate(m, n);
		for (const auto& i : primes) {
			if (m <= i && i <= n) {
				printf("%d\n", i);
			}
		}
		printf("\n");
	}

private:
	void calculatePrimes() {
		for (unsigned int i = 2; i <= 31622; ++i) {
			bool isPrime = true;
			for (const auto& j : primes) {
				if (i % j == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				primes.push_back(i);
			}
		}
	}

	std::vector<unsigned long> calculate(unsigned long m, unsigned long n) {
		std::vector<unsigned long> result;
		for (unsigned long i = m; i <= n; ++i) {
			if (i == 1) {
				continue;
			}
			bool isPrime = true;
			unsigned int sq = sqrt(i);
			for (const auto& prime : primes) {
				if (sq < prime) {
					break;
				}
				if (i % prime == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				result.push_back(i);
			}
		}
		return result;
	}

	std::vector<int> primes;

};


int PRIME1() {
	int count;
	scanf("%d", &count);
	Prime1 sln;
	for (int i = 0; i < count; ++i) {
		unsigned long m, n;
		scanf("%lu %lu", &m, &n);
		sln.calculateAndPrint(m, n);
	}
	return 0;
}