#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string S;
  cin >> S;
  int N = S.size();
  vector<vector<int>> dp(33, vector<int>(N));
  vector<int> ans(N);

  rep(i, 0, N) {
    if (S[i] == 'R')
      dp[0][i] = i + 1;
    else
      dp[0][i] = i - 1;
  }

  rep(p, 0, 32) rep(i, 0, N) dp[p + 1][i] = dp[p][dp[p][i]];

  rep(i, 0, N) ans[dp[32][i]]++;
  rep(i, 0, N) {
    if (i) printf(" ");
    printf("%d", ans[i]);
  }
  printf("\n");

  return 0;
}