#include <cmath>
#include <iostream>
using namespace std;

// Function to calculate the sum of digits raised to the power of N
int sumOfDigits(int num, int power) {
  int sum = 0;
  while (num > 0) {
    int digit = num % 10;
    sum += pow(digit, power);
    num /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  long long totalSum = 0; // Use long long to avoid overflow for large sums

  // Calculate the upper bound for the numbers to be checked
  int upperBound = pow(9, N) * N;

  // Iterate through all numbers within the range [10, upperBound]
  for (int num = 10; num <= upperBound; num++) {
    if (num == sumOfDigits(num, N)) {
      totalSum += num;
    }
  }

  cout << totalSum << endl;

  return 0;
}

