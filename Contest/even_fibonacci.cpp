#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of even Fibonacci numbers up to a given size
unsigned long long int evenFibonacciSum(unsigned long long int size) {
  if (size <= 0)
    return 0;

  unsigned long long int fib1 = 1;
  unsigned long long int fib2 = 2;
  unsigned long long int sum = 0;

  while (fib2 <= size) {
    if (fib2 % 2 == 0) // Check if current Fibonacci number is even
      sum += fib2;

    unsigned long long int nextFib = fib1 + fib2;
    fib1 = fib2;
    fib2 = nextFib;
  }

  return sum;
}

int main(void) {
  int t;
  cin >> t;

  while (t--) {
    unsigned long long int size;
    cin >> size;

    unsigned long long int result = evenFibonacciSum(size);

    cout << result << endl;
  }

  return 0;
}
