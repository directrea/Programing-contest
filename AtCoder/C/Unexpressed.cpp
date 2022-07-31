#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  ll N;
  cin >> N;

  set<ll> st;

  for (ll i = 2; i * i <= N; i++) {
    ll tmp = i;
    while (tmp * i <= N) {
      tmp *= i;
      st.insert(tmp);
    }
  }

  printf("%lld\n", N - st.size());

  return 0;
}