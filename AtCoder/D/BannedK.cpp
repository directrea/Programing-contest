#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<ll> cnt(N + 1, 0), A(N);
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    A[i] = tmp;
    cnt[tmp]++;
  }

  ll all = 0;
  for (int i = 0; i < cnt.size(); i++) {
    all += cnt[i] * (cnt[i] - 1) / 2;
  }

  for (ll i : A) {
    ll tmp = cnt[i], ans = all;
    ans -= tmp * (tmp - 1) / 2;
    tmp--;
    ans += tmp * (tmp - 1) / 2;
    cout << ans << endl;
  }

  return 0;
}