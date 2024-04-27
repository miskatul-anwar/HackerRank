#include <bits/stdc++.h>
using namespace std;
long long int sumOfdigits(int value) {
  long long int sum = 0;
  while (value) {
    int digit = value % 10;
    sum += digit;
    value /= 10;
  }
  return sum;
}
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    N = pow(2, N);
    cout << sumOfdigits(N) << endl;
  }
  return 0;
}
