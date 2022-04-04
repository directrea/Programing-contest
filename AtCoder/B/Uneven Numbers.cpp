#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  int tmp = N;
  int digit = 0;
  while (tmp) {
    tmp /= 10;
    digit++;
    // cout << digit << endl;
  }
  int ans = 0;
  for (int i = 0; i < digit; i++) {
    if (i % 2 == 0) {
      if (i) {
        int base = pow(10, i);
        if (i == digit - 1) {
          ans += N - base + 1;
        } else {
          ans += base * 10 - base;
        }
      } else {
        if (i == digit - 1) {
          ans += N;
        } else {
          ans += 9;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}