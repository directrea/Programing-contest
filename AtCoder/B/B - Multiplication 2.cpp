#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

bool isOverFlow(ll a, ll b) {
  if (min(a, b) == 0) {
    return false;
  } else {
    if (a > LONG_LONG_MAX / b)
      return true;
    else
      return false;
  }
}

int main() {
  int N;
  cin >> N;
  ll lim = pow(10, 18);
  ll ans = 1;
  bool ovf = false;
  for (int i = 0; i < N; i++) {
    ll tmp;
    cin >> tmp;
    if (isOverFlow(ans, tmp)) {
      ovf = true;
    } else {
      ans *= tmp;
    }
  }
  if (ovf || ans > lim)
    if (ans == 0)
      printf("%d\n", 0);
    else
      printf("%d\n", -1);
  else
    printf("%lld\n", ans);

  return 0;
}