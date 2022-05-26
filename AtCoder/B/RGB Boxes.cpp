#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  vector<int> rgb(3);
  rep(i, 0, 3) cin >> rgb[i];
  cin >> N;
  vector<int> dp(N + 1, 0);
  for (int i : rgb) dp[i] = 1;
  int An = dp.size();
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < An; j++) {
      if (0 <= j - rgb[i]) {
        dp[j] += dp[j - rgb[i]];
      }
    }
  }

  return 0;
}