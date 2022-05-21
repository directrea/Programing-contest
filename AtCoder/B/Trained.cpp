#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) {
    int tmp;
    cin >> tmp;
    tmp--;
    A[i] = tmp;
  }
  vector<bool> flashed(N, false);
  flashed[0] = true;
  int idx = 0;
  int ans_cnt = 0;
  while (true) {
    if (flashed[A[idx]] == false) {
      idx = A[idx];
      flashed[idx] = true;
      ans_cnt++;
      if (flashed[1]) break;
    } else {
      break;
    }
  }
  if (flashed[1]) {
    cout << ans_cnt << endl;
  } else
    cout << -1 << endl;
  return 0;
}
