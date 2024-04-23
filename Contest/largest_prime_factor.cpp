#include "bits/stdc++.h"
using namespace std;

// Function to find the largest prime factor
long long largestPrimeFactor(long long n) {
  long long maxPrime = -1;

  // Divide by 2 until n becomes odd
  while (n % 2 == 0) {
    maxPrime = 2;
    n /= 2;
  }

  // After this, n must be odd. So we can skip even numbers.
  for (long long i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      maxPrime = i;
      n = n / i;
    }
  }

  // If n is a prime greater than 2
  if (n > 2) {
    maxPrime = n;
  }

  return maxPrime;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    long long largestPrime = largestPrimeFactor(n);
    cout << largestPrime << endl;
  }

  return 0;
}
