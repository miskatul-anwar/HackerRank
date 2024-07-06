#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

vector<int> generatePrimes(int limit) {
  vector<bool> isPrime(limit + 1, true);
  vector<int> primes;
  isPrime[0] = isPrime[1] = false;

  for (int p = 2; p * p <= limit; p++) {
    if (isPrime[p]) {
      primes.push_back(p);
      for (int i = p * p; i <= limit; i += p) {
        isPrime[i] = false;
      }
    }
  }

  for (int p = int(sqrt(limit)) + 1; p <= limit; p++) {
    if (isPrime[p]) {
      primes.push_back(p);
    }
  }

  return primes;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    // Generate primes up to a limit that is likely to contain the nth prime
    int limit = max_element(100, n * log(n) + n * log(log(n)));
    vector<int> primes = generatePrimes(limit);

    // Output the nth prime number
    cout << primes[n - 1] << endl;
  }

  return 0;
}

