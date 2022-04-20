#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  set<int> mods;
  int tmp = 0;
  while (tmp += A) {
    int mods_size = mods.size();
    int ans = tmp % B;
    mods.insert(ans);
    tmp = ans;
    if (mods_size == mods.size()) {
      break;
    }
  }
  if (mods.count(C)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}