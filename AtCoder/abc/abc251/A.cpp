#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string st;
  cin >> st;
  int n = st.size();
  string ans = "";

  for (int i = 0; i < 6; i++) {
    ans += st[i % n];
  }
  cout << ans << endl;

  return 0;
}