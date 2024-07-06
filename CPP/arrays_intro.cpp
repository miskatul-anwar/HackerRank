#include "bits/stdc++.h"
#include <iostream>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> array;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    array.push_back(val);
  }
  reverse(array.begin(), array.end());
  for (auto i : array) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
