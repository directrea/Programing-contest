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

  vector<vector<bool>> dp(N + 1, vector<bool>(100 * 100 + 1, false));
  dp[0][0] = true;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < dp[0].size(); j++) {
      if (dp[i][j]) {
        dp[i + 1][j] = true;
        dp[i + 1][j + vec[i]] = true;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < dp[0].size(); i++) {
    if (dp[N][i] && i % 10) ans = i;
  }
  cout << ans << endl;

  return 0;
}