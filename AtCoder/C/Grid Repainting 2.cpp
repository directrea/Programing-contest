#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int solve(vector<vector<bool>> &vec, int x, int y) {
  int anscnt = 1;
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      if (i == 0 ^ j == 0) {
        if (0 <= x + i && x + i < vec.size() && 0 <= y + j &&
            y + j < vec[0].size()) {
          if (vec[x + i][y + j]) anscnt++;
        }
      }
    }
  }
  return anscnt;
}

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<bool>> vec(H, vector<bool>(W, false));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      char c;
      cin >> c;
      if (c == '#') vec[i][j] = true;
    }
  }
  bool ansbool = true;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (vec[i][j]) {
        int tmp = solve(vec, i, j);
        if (tmp < 2) {
          ansbool = false;
        }
      }
    }
  }
  if (ansbool)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}