#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  rep(i, 0, N) cin >> vec[i];
  // sort(all(vec));
  // cout << endl;
  vector<int> ansvec;
  for (int i = 0; i < (1 << N); i++) {
    int tmpsum = 0;
    for (int bit = 0; bit < N; bit++) {
      if (i & (1 << bit)) tmpsum += vec[bit];
    }
    ansvec.push_back(tmpsum);
  }
  sort(all(ansvec), greater<int>());
  for (int i : ansvec) {
    if (i % 10 != 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << 0 << endl;

  return 0;
}