#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];

  vector<bool> masu(4, false);
  int ans = 0;
  for (int i : A) {
    masu[0] = true;
    vector<bool> tmpmasu = masu;
    for (int j =  masu.size()-1; 0<=j; j--) {
      if (masu[j]) {
        tmpmasu[j] = false;
        if (i + j >= 4) {
          ans++;
        } else {
          tmpmasu[i + j] = true;
        }
      }
    }
    masu = tmpmasu;
  }
  printf("%d\n", ans);

  return 0;
}