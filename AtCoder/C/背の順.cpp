#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(2));

  for (int i = 0; i < N; i++) {
    cin >> A[i][0];
    A[i][1] = i;
  }

  sort(A.begin(), A.end(), greater<vector<int>>());

  for (vector<int> vec : A) printf("%d\n",vec[1]+1);
  return 0;
}