#include <iostream>
#include <string>
#include <vector>

using namespace std;

string addBigNumbers(const vector<string> &numbers) {
  string result;
  int carry = 0;

  for (int i = 49; i >= 0; --i) {
    int sum = carry;
    for (const string &num : numbers) {
      sum += num[i] - '0';
    }
    result.insert(result.begin(), sum % 10 + '0');
    carry = sum / 10;
  }

  while (carry) {
    result.insert(result.begin(), carry % 10 + '0');
    carry /= 10;
  }

  return result;
}

int main() {
  int N;
  cin >> N;
  vector<string> numbers(N);
  for (int i = 0; i < N; ++i) {
    cin >> numbers[i];
  }
  string sum = addBigNumbers(numbers);
  cout << sum.substr(0, 10) << endl;
  return 0;
}
