#include <bits/stdc++.h>
#include <gmpxx.h>
using namespace std;

class Solution {
public:
  void solve(void) {
    int n;
    mpz_class x = 0;
    cin >> n;
    while (n--) {
      cin >> x;
      x += x;
    }
    string s = x.get_str();
    string g = s.substr(0, 10);
    cout << g << endl;
  }
};
int main(void) {
  Solution().solve();
  return 0;
}
