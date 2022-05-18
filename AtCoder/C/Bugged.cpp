#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  rep(i, 0, N) cin >> vec[i];
  sort(all(vec));
  int maxscore = accumulate(all(vec), 0);
  // cout << endl;

  for (int i = 0; i < (1 << N); i++) {
    int tmpsum = 0;
    for (int bit = 0; bit < N; bit++) {
      if (i & (1 << bit)) tmpsum += vec[bit];
    }
    int ans = maxscore - tmpsum;
    if (ans % 10 != 0) {
      cout << ans << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}