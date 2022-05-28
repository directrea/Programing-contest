#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  vector<int> rgb(3);
  rep(i, 0, 3) cin >> rgb[i];
  int N;
  cin >> N;
  int ans = 0;

  for (int i = 0; i <= N / rgb[0]; i++) {
    int baser = N - rgb[0] * i;
    for (int j = 0; j <= baser / rgb[1]; j++) {
      int baseg = baser - rgb[1] * j;

      if (baseg % rgb[2] == 0) {
        // cout << "(" << i << "," << j << "," << baseg / rgb[2] << ")" << endl;
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}