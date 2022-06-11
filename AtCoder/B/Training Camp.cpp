#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  ll ans = 1;
  ll tn = pow(10, 9) + 7;
  for (ll i = 1; i <= N; i++) {
    ans *= i;
    ans = ans % tn;
  }
  printf("%lld\n", ans);

  return 0;
}