#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string st;
  cin >> st;

  sort(all(st));
  int ans = 0;
  do {
    for (int i = 1; i < st.size(); i++) {
      int l = 0, r = 0;
      for (int j = 0; j < i; j++) l = l * 10 + st[j] - '0';

      for (int j = i; j < st.size(); j++) r = r * 10 + st[j] - '0';

      // printf("%d %d\n", l, r);
      ans = max(ans, l * r);
    }
  } while (next_permutation(all(st)));

  printf("%d\n", ans);
  return 0;
}