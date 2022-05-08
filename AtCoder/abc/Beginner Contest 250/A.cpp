#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  int R, C;
  cin >> R >> C;
  int cnt = 0;
  if (C <= W) {
    if (R + 1 <= H) cnt++;
    if (1 <= R - 1) cnt++;
  }
  if (R <= H) {
    if (C + 1 <= W) cnt++;
    if (1 <= C - 1) cnt++;
  }
  cout << cnt << endl;

  return 0;
}