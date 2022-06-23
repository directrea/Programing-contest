#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

bool isok(vector<char> &A) {
  vector<char> s = {'1', '1', '0'};
  for (int st = 0; st < s.size(); st++) {
    bool ok = true;
    for (int i = 0; i < A.size(); i++) {
      if (A[i] != s[(st + i) % 3]) ok = false;
    }
    if (ok) return true;
  }
  return false;
}

int main() {
  int N;
  cin >> N;

  vector<char> A(N);
  rep(i, 0, N) cin >> A[i];
  if (N == 1) {
    if (A[0] == '1')
      printf("%lld", 2 * ll(pow(10, 10)));
    else
      printf("%lld", ll(pow(10, 10)));
    return 0;
  }

  ll tsize = A.size();
  if (1 < A.size()) {
    if (A[0] == '0')
      tsize += 2;
    else if (A[1] == '0')
      tsize += 1;
    if (tsize % 3) tsize = tsize + (3 - tsize % 3);
  }

  if (isok(A)) {
    ll lim = pow(10, 10);
    ll ans = lim + (1 - tsize / 3);
    printf("%lld\n", ans);
  } else {
    printf("%d\n", 0);
  }

  return 0;
}