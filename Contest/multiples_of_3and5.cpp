#include "bits/stdc++.h"
using namespace std;
int multiples_of_3_5(int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << multiples_of_3_5(n) << endl;
  }
  return 0;
}
