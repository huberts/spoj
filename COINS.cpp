#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef unsigned int UINT;
typedef vector<UINT> V;


class COINSData {
public:
	map<UINT, UINT> results;
};


UINT partialResult(COINSData& cd, UINT i) {
	auto alreadyCalculated = cd.results.find(i);
	if (alreadyCalculated != cd.results.end()) {
		return alreadyCalculated->second;
	}
	UINT result = 0;
	UINT i2 = i / 2;
	UINT i3 = i / 3;
	UINT i4 = i / 4;
	if (i2 + i3 + i4 > i) {
		result = partialResult(cd, i2) + partialResult(cd, i3) + partialResult(cd, i4);
	}
	else {
		result = i;
	}
	cd.results.insert(make_pair(i, result));
	return result;
}


void COINS_calculateAndPrint(COINSData& cd, UINT n) {
	UINT result = partialResult(cd, n);
	printf("%u\n", result);
}

int COINS() {
	COINSData cd;
	UINT n = 0;
	while (cin >> n) {
		COINS_calculateAndPrint(cd, n);
	}
	return 0;
}
