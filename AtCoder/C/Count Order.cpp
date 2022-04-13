#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
int N;
int main() {
  cin >> N;
  vector<int> P(N), Q(N);
  rep(i, 0, N) cin >> P[i];
  rep(i, 0, N) cin >> Q[i];
  vector<int> ord(N);
  rep(i, 1, N + 1) ord[i - 1] = i;
  int Pth, Qth, perth = 1;
  do {
    bool P_bool = true, Q_bool = true;
    rep(i, 0, N) {
      if (ord[i] != P[i]) P_bool = false;
      if (ord[i] != Q[i]) Q_bool = false;
    }
    if (P_bool) Pth = perth;
    if (Q_bool) Qth = perth;
    perth++;
  } while (next_permutation(all(ord)));
  cout << abs(Pth - Qth) << endl;
  return 0;
}