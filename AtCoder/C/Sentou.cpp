#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  ll ans = 0;
  for (int i = 1; i < N; i++) {
    int tdis = A[i] - A[i - 1];
    // cout << tdis << endl;
    if (tdis < T)
      ans += tdis;
    else
      ans += T;
  }
  ans += T;
  cout << ans << endl;
  return 0;
}