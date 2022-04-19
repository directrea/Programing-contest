#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

void mine(vector<vector<int>> &ansvec, int x, int y) {
  for (int i = -1; i < 2; i++) {
    for (int j = -1; j < 2; j++) {
      if (i == 0 && j == 0) continue;
      if (0 <= x + i && x + i < ansvec.size() && 0 <= y + j &&
          y + j < ansvec[0].size()) {
        ansvec[x + i][y + j]++;
      }
    }
  }
}

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<bool>> A(H, vector<bool>(W, false));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      char tmp;
      cin >> tmp;
      if (tmp == '#') A[i][j] = true;
    }
  }
  vector<vector<int>> ansvec(H, vector<int>(W, 0));
  rep(i, 0, H) {
    rep(j, 0, W) {
      if (A[i][j]) {
        mine(ansvec, i, j);
      }
    }
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (A[i][j])
        cout << "#";
      else
        cout << ansvec[i][j];
    }
    cout << endl;
  }
  return 0;
}