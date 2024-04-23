#include <iostream>

using namespace std;

// Function to calculate the sum of multiples of 3 and 5 up to n
long long sum_of_multiples(long long n) {
  n--; // Since we need the sum below n
  long long sum_of_3 = (3 * (n / 3) * (n / 3 + 1)) / 2;
  long long sum_of_5 = (5 * (n / 5) * (n / 5 + 1)) / 2;
  long long sum_of_15 = (15 * (n / 15) * (n / 15 + 1)) / 2;
  return sum_of_3 + sum_of_5 - sum_of_15;
}

int main() {
  int t;
  cin >> t; // Input number of test cases

  // Iterate through each test case
  while (t--) {
    long long N;
    cin >> N; // Input N for each test case
    // Print the summation of multiples of 3 or 5 below N
    cout << sum_of_multiples(N) << endl;
  }
  return 0;
}
