#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N = 3;
  for (int i = 0; i < (1 << N); i++) {
    for (int bit = 0; bit < N; bit++) {
      if (i & (1 << bit)) cout << bit << ' ';
    }
    cout << endl;
  }

  return 0;
}