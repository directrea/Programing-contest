#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

vector<vector<int>> solve(int h) {
  vector<vector<int>> res;
  for (int i = 1; i < h; i++) {
    for (int j = 1; j < h - i; j++) {
      res.push_back(vector<int>{i, j, h - i - j});
      // printf("%d %d %d\n", i, j,h-i-j);
    }
  }
  return res;
}

int main() {
  vector<int> h(3), w(3);

  rep(i, 0, 3) cin >> h[i];
  rep(i, 0, 3) cin >> w[i];

  vector<vector<int>> vvh1 = solve(h[0]);
  vector<vector<int>> vvh2 = solve(h[1]);
  int anscnt = 0;
  for (vector<int> vh1 : vvh1) {
    for (vector<int> vh2 : vvh2) {
      // vh1 = {1,1,1};
      // vh2 = {1,1,2};
      vector<int> ws(3);
      rep(i, 0, 3) ws[i] = vh1[i] + vh2[i];
      bool isok = true;
      rep(i, 0, 3) {
        if (ws[i] < w[i]) {
        } else {
          isok = false;
        }
      }
      int sum = 0;
          rep(i, 0, 3) sum += w[i]-ws[i];
          if (sum != h[2]) isok = false;
      if (isok) {
        anscnt++;
      }
    }
  }
  printf("%d\n", anscnt);

  return 0;
}