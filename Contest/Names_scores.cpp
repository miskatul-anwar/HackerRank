#include <bits/stdc++.h>
using namespace std;
int calculateStringValue(string s);
int main(void) {
  vector<string> v;
  int N;
  cin >> N;
  while (N--) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  int Q;
  cin >> Q;
  while (Q--) {
    string s;
    cin >> s;
    int pos = 0;
    for (auto it : v) {
      pos++;
      if (s == it) {
        cout << pos * calculateStringValue(it) << endl;
      }
    }
  }
  return 0;
}
int calculateStringValue(string s) {
  int sum = 0;
  for (auto it : s) {
    if (it >= 'A' and it <= 'Z') {
      sum += it - 'A' + 1;
    }
  }
  return sum;
}
