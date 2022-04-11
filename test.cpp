#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  vector<int> test{0, 1, 2};
  while (next_permutation(all(test))) {
    rep(i, 0, test.size()) cout << test[i];
    cout << endl;
  }
  return 0;
}