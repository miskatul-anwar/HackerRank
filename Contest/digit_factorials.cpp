#include "bits/stdc++.h"
using namespace std;
long long int factorial(long long int N) {
  if (N <= 1) {
    return N;
  }
  return N * factorial(N - 1);
}
int main(void) {
  long long int N;
  cin >> N;
  string str = to_string(factorial(N));
  long long int x = 0;
  for (long long int i = 0; i < str.size(); i++) {
    x = str[i] - '0' + 1;
    x += factorial(i);
  }
  cout << x << endl;
  return 0;
}
