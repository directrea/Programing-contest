#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  ll K;
  cin >> N >> K;

  vector<vector<ll>> A(N, vector<ll>(N));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }

  vector<int> perm(N - 1);
  for (int i = 0; i < perm.size(); i++) perm[i] = i + 1;
  int cnt_ans = 0;
  do {
    ll sum_ans = 0, loc = 0;

    for (int i : perm) {
      sum_ans += A[loc][i];
      loc = i;
    }
    sum_ans += A[loc][0];
    // printf("%lld\n", sum_ans);
    if (sum_ans == K) cnt_ans++;
  } while (next_permutation(all(perm)));

  printf("%d\n",cnt_ans);

  return 0;
}