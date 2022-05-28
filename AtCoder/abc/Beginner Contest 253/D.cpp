#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  set<int> st;
  for (int i = 0; i <= N / A; i++) st.insert(A * i);
  for (int i = 0; i <= N / B; i++) st.insert(B * i);

  ll ans = N * (N + 1) / 2;

  for (int i : st) ans -= i;
  cout << ans << endl;
  return 0;
}