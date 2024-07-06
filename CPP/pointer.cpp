#include "bits/stdc++.h"
using namespace std;
void update(int *a, int *b);

int main() {
  int a, b;
  int *pa = &a, *pb = &b;
  cin >> a >> b;
  update(pa, pb);
  cout << a << "\n" << b << "\n";
  return 0;
}
void update(int *a, int *b) {
  int tmpa = *a, tmpb = *b;
  *a = *a + *b;
  *b = abs(tmpa - tmpb);
}
