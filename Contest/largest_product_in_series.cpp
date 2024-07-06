#include <bits/stdc++.h>
using namespace std;

// Function to find the greatest product of consecutive k digits in an n digit
// number
int greatestProduct(int n, int k, const string &num) {
  int maxProduct = 0;
  for (int i = 0; i <= n - k; ++i) {
    int product = 1;
    for (int j = 0; j < k; ++j) {
      product *= (num[i + j] - '0');
    }
    maxProduct = max(maxProduct, product);
  }
  return maxProduct;
}

int main() {
  int t;
  cin >> t; // Number of test cases

  while (t--) {
    int n, k;
    cin >> n >> k; // Input n and k for each test case
    string num;
    cin >> num; // Input the n-digit integer

    int result = greatestProduct(n, k, num);
    cout << result << endl;
  }
  return 0;
}
