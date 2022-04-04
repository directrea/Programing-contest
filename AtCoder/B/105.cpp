#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N ;
  cin >> N;

  int ans_cnt = 0;
  for (int i = 1; i <= N; i += 2) {
    int tmp_cnt = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        tmp_cnt++;
      }
    }
    if (tmp_cnt == 8) {
      // cout << i << endl;
      ans_cnt++;
    }
  }
  cout << ans_cnt << endl;
  return 0;
}