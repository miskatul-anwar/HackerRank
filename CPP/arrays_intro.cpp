#include "bits/stdc++.h"
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> array;
  for (auto i : array) {
    cin >> i;
  }
  reverse(array.begin(), array.end());
  for (auto i : array) {
    cout << i;
  }
  return 0;
}
