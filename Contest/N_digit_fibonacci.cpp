#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> memo;

int fibonacci(int number) {
  if (number <= 1) {
    return number;
  }
  if (memo.find(number) != memo.end()) {
    return memo[number];
  }
  return memo[number] = fibonacci(number - 1) + fibonacci(number - 2);
}

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    int count = 0;
    for (int i = 0;; i++) {
      int fib = fibonacci(i);
      if (to_string(fib).length() == N) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}
