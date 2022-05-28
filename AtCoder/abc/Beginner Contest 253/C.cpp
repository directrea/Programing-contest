#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  map<int, int> mp;
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int q;
    cin >> q;
    if (q == 1) {
      int x;
      cin >> x;
      mp[x]++;
    } else if (q == 2) {
      int x, c;
      cin >> x >> c;
      if (mp[x] - c <= 0)
        mp.erase(x);
      else
        mp[x] -= c;
    } else {
      cout << mp.rbegin()->first - mp.begin()->first << endl;
    }
  }

  return 0;
}