#include <bits/stdc++.h>
using namespace std;

long long maxProductPythagoreanTriplet(int N) {
  long long maxProduct = -1;
  for (int a = 1; a < N / 3; a++) {
    int b = (N * N - 2 * N * a) / (2 * N - 2 * a);
    int c = N - a - b;
    if (a * a + b * b == c * c && b > a) {
      long long product = (long long)a * b * c;
      if (product > maxProduct)
        maxProduct = product;
    }
  }
  return maxProduct;
}

int main(void) {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    long long result = maxProductPythagoreanTriplet(N);
    cout << result << endl;
  }
  return 0;
}
