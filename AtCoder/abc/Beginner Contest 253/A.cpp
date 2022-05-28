#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> A(3);
  A[0] = a, A[1] = b, A[2] = c;
  sort(all(A));
  if (A[1] == b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}