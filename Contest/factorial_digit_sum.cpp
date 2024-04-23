#include <iostream>
#include <vector>
using namespace std;

// Function to calculate factorial of a number
void factorial(vector<int> &result, int n) {
  result[0] = 1;
  int result_size = 1;

  for (int i = 2; i <= n; i++) {
    int carry = 0;
    for (int j = 0; j < result_size; j++) {
      int product = result[j] * i + carry;
      result[j] = product % 10;
      carry = product / 10;
    }

    while (carry) {
      result[result_size] = carry % 10;
      carry /= 10;
      result_size++;
    }
  }
}

// Function to calculate sum of digits in factorial
long long factorialDigitsSum(int n) {
  vector<int> result(10000, 0); // Initialize array to store factorial digits
  factorial(result, n);

  long long sum = 0;
  for (int i = 0; i < result.size(); i++) {
    sum += result[i];
  }
  return sum;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    cout << factorialDigitsSum(n) << endl;
  }

  return 0;
}
