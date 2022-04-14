#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  vector<int> A(2), B(2);
  rep(i, 0, 2) cin >> A[i];
  rep(i, 0, 2) cin >> B[i];
  int a = 0, b = 0;
  a = A[0] * 60 * 60 + A[1] * 60;
  b = B[0] * 60 * 60 + B[1] * 60 + 1;
  if (a > b)
    cout << "Aoki" << endl;
  else
    cout << "Takahashi" << endl;
  return 0;
}