#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  set<int> A;
  cin >> N;
  rep(i, 0, N) {
    int tmp;
    cin >> tmp;
    A.insert(tmp);
  }
  rep(i, 0, 2001) {
    if (A.count(i) == 0) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}