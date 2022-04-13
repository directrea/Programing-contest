#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int N, L, ans_cnt = 0;
int main() {
  cin >> N >> L;
  vector<set<int>> G(N);
  for (int i = 0; i < L; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].insert(b), G[b].insert(a);
  }
  vector<int> ord{0, 2, 3, 4, 5, 6, 1};
  // rep(i, 0, N) ord[i] = i;

  for (int i : ord) cout << i;
  cout << endl;
  int bf = ord[0];
  bool match = true;
  for (int i = 1; i < N; i++) {
    if (G[bf].count(ord[i]) == 0) {
      match = false;
      break;
    }
    bf = ord[i];
  }
  if (match) ans_cnt++;
  cout << ans_cnt << endl;
  return 0;
}