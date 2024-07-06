#include "bits/stdc++.h"
using namespace std;
int main(void) {
  vector<int> v = {1, 2, 3, 4, 6};
  vector<int>::iterator it = find(v.begin(), v.end(), 6);
  cout << *it << endl;
  cout << distance(v.begin(), it) << endl;
  return 0;
}
