#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<vector<int>> vvec(2, vector<int>(N));
  rep(i, 0, 2) {
    rep(j, 0, N) { cin >> vvec[i][j]; }
  }

  vector<vector<bool>> dp(2, vector<bool>(N, false));
  dp[0][0] = true, dp[1][0] = true;

  rep(i, 0, N - 1) {
    rep(j, 0, 2) {
      if (dp[j][i]) {
        rep(k, 0, 2) {
          if (abs(vvec[j][i] - vvec[k][i + 1]) <= K) {
            dp[k][i + 1] = true;
          }
        }
      }
    }
  }

  bool ans_bool = false;
  for (int i = 0; i < 2;i++){
    ans_bool = ans_bool || dp[i][dp[0].size() - 1];
  }
    if (ans_bool)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  return 0;
}