#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N = 105;
  // cin >> N;

  vector<bool> primes_hurui(N + 1, false);
  // primes_hurui[2] = true;
  vector<int> primes;
  for (int i = 2; i < primes_hurui.size(); i++) {
    if (!primes_hurui[i]) {
      primes.push_back(i);
      int tmp_i = i;
      while (tmp_i < primes_hurui.size()) {
        primes_hurui[tmp_i] = true;
        tmp_i += i;
      }
    }
  }
  for (int i : primes) {
    printf("%d ", i);
  }
  int ans_cnt = 0;
  for (int i = 0; i < N + 1; i++) {
    int tmp_cnt = 0;
    for (int prime : primes) {
      if (i % prime == 0) {
        tmp_cnt++;
      }
    }
    if (tmp_cnt == 8) {
      printf("%d", i);
      ans_cnt++;
    }
  }
  cout << ans_cnt << endl;
  return 0;
}