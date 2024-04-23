#include "bits/stdc++.h"
using namespace std;
long long sum_square_difference(int n) {
  long long sum = 0, sum_square = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
    sum_square += i * i;
  }
  return abs(sum_square - sum * sum);
}
int main(void) {
  long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    cout << sum_square_difference(n) << endl;
  }
  return 0;
}
