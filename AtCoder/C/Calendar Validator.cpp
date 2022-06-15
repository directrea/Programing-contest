#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<ll>> A(N, vector<ll>(M));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }
  bool ans = true;
  for (int i = 0; i < N; i++) {
    bool flag = true;
    for (int j = 0; j < M; j++) {
      if (i + 1 < N) {
        flag = flag && A[i + 1][j] - A[i][j] == 7;
      }

      if (j + 1 < M) {
        if (A[i][j] % 7 == 0) flag = false;
        flag = flag && A[i][j + 1] - A[i][j] == 1;
      }
      if (!flag) {
        ans = false;
      }
    }
  }

  if (ans)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}