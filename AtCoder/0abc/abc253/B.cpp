#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      char c;
      cin >> c;
      vector<int> tmpvec = {i, j};
      if (c == 'o') A.push_back(tmpvec);
    }
  }
  
  int ans = abs(A[0][0] - A[1][0]) + abs(A[0][1] - A[1][1]);
  cout << ans << endl;

  return 0;
}