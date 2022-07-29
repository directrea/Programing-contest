#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;

  ll ans = 1;
  for (int i = 1; i <= 25; i++) {
    ans=(ans*i)%998244353;
  }
  printf("%lld",ans);

  return 0;
}