
#include <iostream>

// Function to find the greatest common divisor (GCD) using Euclid's algorithm
class Solution {
private:
  int gcd(int a, int b) {
    while (b != 0) {
      int temp = b;
      b = a % b;
      a = temp;
    }
    return a;
  }

public:
  // Function to find the smallest multiple of N divisible by all integers from
  // 1 to N
  int smallest_multiple(int N) {
    int lcm = 1;
    for (int i = 2; i <= N; i++) {
      lcm = (lcm * i) / gcd(lcm, i);
    }
    return lcm;
  }
};

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::cout << Solution().smallest_multiple(n) << std::endl;
  }
  return 0;
}
