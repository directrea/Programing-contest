#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, 0, N) cin >> A[i];

  int top = 0, tail = A.size() - 1;
  ll ls = 0, rs = 0;
  while (top <= tail) {
    if (ls < rs) {
      ls += A[top];
      top++;
    } else {
      rs += A[tail];
      tail--;
    }
  }

  ll ans = max(ls, rs) - min(ls, rs);
  printf("%lld\n", ans);

  return 0;
}