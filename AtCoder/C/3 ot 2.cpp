#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      while (true) {
        a /= 2;
        ans++;
        if (a % 2) break;
      }
    }
  }
  printf("%d\n", ans);

  return 0;
}