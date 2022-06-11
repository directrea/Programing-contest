#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<char>> A(N, vector<char>(N));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }
  for (int c = 0; c < N; c++) {
    for (int r = N - 1; 0 <= r; r--) {
      printf("%c", A[r][c]);
    }
    printf("\n");
  }

  return 0;
}