#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  vector<ll> A(3);
  for (int i = 0; i < 3; i++) {
    cin >> A[i];
  }
  ll ans_cnt = 0;
  sort(all(A));
  ll dis = A[1] - A[0];
  A[2] -= dis;
  A[1] -= dis;
  ans_cnt += dis;

  dis = A[2] - A[1];
  A[0] -= dis;
  A[1] -= dis;
  A[2] -= dis * 2;
  ans_cnt += dis * 2;

  if (0 <= A[0] && 0 <= A[1] && 0 <= A[2]) {
    ans_cnt += A[0];
    printf("%lld\n", ans_cnt);
  } else {
    printf("%d\n", -1);
  }

  return 0;
}