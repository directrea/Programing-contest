#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

vector<vector<int>> comb(int h) {
  vector<vector<int>> res;
  for (int i = h; 0 < i; i--) {
    for (int j = 1; j < h - i; j++) {
      // printf("%d %d %d\n", i, j, h - i - j);
      res.push_back(vector<int>{i, j, h - (i + j)});
    }
  }
  return res;
}

int main() {
  vector<int> h(3), w(3);

  rep(i, 0, 3) cin >> h[i];
  rep(i, 0, 3) cin >> w[i];

  vector<vector<vector<int>>> hs;

  for (int i = 0; i < 2; i++) {
    hs.push_back(comb(h[i]));
  }
  int ans = 0;
  for (vector<int> h1 : hs[0]) {
    for (vector<int> h2 : hs[1]) {
      // h1とh2横方向
      vector<vector<int>> masu(3, vector<int>(3, 0));
      rep(i, 0, 3) masu[0][i] = h1[i];
      rep(i, 0, 3) masu[1][i] = h2[i];

      //縦方向
      for (int c = 0; c < 3; c++) {
        int csum = 0;
        for (int r = 0; r < 2; r++) {
          csum += masu[r][c];
        }
        masu[2][c] = w[c] - csum;
      }
      // h3について
      int h3 = 0;
      for (int m : *(masu.end() - 1)) {
        if (m <= 0) {
          h3 = 0;
          break;
        }
        h3 += m;
      }
      if (h3 != 0 && h3 == h[2]) {
        ans++;
      }
    }
  }
  printf("%d\n", ans);
  
  return 0;
}