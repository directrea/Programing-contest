#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1, 0);
  rep(i, 0, A.size()) cin >> A[i];

  ll ans = 0;
  rep(i, 0, N) {
    int hero;
    cin >> hero;
    rep(j, 0, 2) {
      if (hero <= A[i + j]) {
        A[i + j] -= hero;
        ans += hero;
        hero = 0;
      } else {
        ans += A[i + j];
        hero -= A[i + j];
        A[i + j] = 0;
      }
    }
  }

  printf("%lld\n", ans);
  return 0;
}