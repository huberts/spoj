#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cmath>

using namespace std;

typedef std::vector<int> V;
typedef std::pair<V, bool> VSigned;


VSigned getV(const char* in, int maxsize) {
  const int ascii_shift = 48;
  V v;
  bool isPositive = in[0] != '-';
  int i = isPositive ? 0 : 1;
  for (i = 0; i < maxsize; ++i) {
    if (in[i] == '\0') {
      break;
    }
    v.push_back(in[i] - ascii_shift);
  }
  return std::make_pair(v, isPositive);
}

int APLUSB2_main() {
  //const int size = 100000 + 1; //HINT: liczba mo¿e byæ ze znakiem
  //const int ascii_shift = 48;
  //char a_in[size], b_in[size];
  //scanf("%s", &a_in);
  //scanf("%s", &b_in);
 
  //VSigned a = getV(a_in, size);
  //VSigned b = getV(b_in, size);

  //int absize = max(a.size(), b.size()) + 1;

  //V as(absize - a.size(), 0);
  //as.insert(as.end(), a.begin(), a.end());
  //V bs(absize - b.size(), 0);
  //bs.insert(bs.end(), b.begin(), b.end());

  //V r(absize, 0);

  //for (int i = absize - 1; i > 0; --i) {
  //  int sum = as[i] + bs[i];
  //  r[i] += sum % 10;
  //  if (r[i] >= 10) {
  //    r[i - 1]++;
  //    r[i] = r[i] % 10;
  //  }
  //  if (sum >= 10) {
  //    r[i - 1]++;
  //  }
  //}
  //
  //char s[size + 1];
  //int shift = 0;
  //for (int i = 0, j = 0; i < r.size(); ++i, ++j) {
  //  if (i == 0 && r[i] == 0) {
  //    j--;
  //    shift++;
  //    continue;
  //  }
  //  s[j] = r[i] + ascii_shift;
  //}
  //s[r.size() - shift] = '\0';
  //printf("%s", s);
  return 0;
}