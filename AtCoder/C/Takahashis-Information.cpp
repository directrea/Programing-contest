#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

bool solve(int q, vector<vector<int>> &A) {
  vector<int> a(3), b(3);
  for (int i = 0; i < 3; i++) {
    b[i] = A[0][i] - a[0];
  }
  for (int i = 1; i < 3; i++) {
    a[i] = A[i][0] - b[0];
    for (int j = 0; j < 3; j++) {
      if (a[i] + b[j] != A[i][j]) return false;
    }
  }
  return true;
}

int main() {
  vector<vector<int>> A(3, vector<int>(3, 0));
  rep(i, 0, 3) rep(j, 0, 3) cin >> A[i][j];

  deque<int> q;
  for (int i = 0; i <= *min_element(all(A[0])); i++) q.push_back(i);
  while (q.size()) {
    int a = q.front();
    q.pop_front();
    if (solve(a, A)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}