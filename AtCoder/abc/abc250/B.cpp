#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  vector<bool> ft(N * B, false);
  bool flag = true;
  for (int i = 0; i < N * B; i++) {
    if (i % B == 0) {
      flag = !flag;
    }
    if (flag)
      ft[i] = true;
    else
      ft[i] = false;
  }
  vector<bool> sec(N * B, false);
  flag = false;
  for (int i = 0; i < N * B; i++) {
    if (i % B == 0) {
      flag = !flag;
    }
    if (flag)
      sec[i] = true;
    else
      sec[i] = false;
  }
  flag = false;
  for (int i = 0; i < N * A; i++) {
    if (i % A == 0) {
      flag = !flag;
    }
    vector<bool> tmp;
    if (flag) {
      tmp = ft;
    } else {
      tmp = sec;
    }
    for (bool b : tmp) {
      if (b)
        cout << '#';
      else
        cout << '.';
    }
    cout << endl;
  }
  return 0;
}