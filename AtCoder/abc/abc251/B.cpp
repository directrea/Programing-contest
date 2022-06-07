#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, W;
  cin >> N >> W;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) cin >> vec[i];

  vector<bool> ansvec(pow(10, 6) + 1, false);
  sort(vec.begin(), vec.end());
  for (int i = 0; i < N; i++) {
    int one = vec[i];
    ansvec[one] = true;
    for (int j = i + 1; j < N; j++) {
      int two = one + vec[j];
      if (two < ansvec.size()) ansvec[two] = true;
      for (int k = j + 1; k < N; k++) {
        int th = two + vec[k];
        if (th < ansvec.size()) ansvec[th] = true;
      }
    }
  }
  int anscnt = 0;
  for (int i = 0; i <= W; i++) {
    if (ansvec[i]) anscnt++;
  }
  cout << anscnt << endl;

  return 0;
}