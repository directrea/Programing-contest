#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int solve(int sec, int m, int rest, int X) {
  int times = X / (sec + rest);
  int amari = min(sec, X % (sec + rest));
  return times * (sec * m) + amari * m;
}

int main() {
  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;
  int takahashi = solve(A, B, C, X), aoki = solve(D, E, F, X);
  if (takahashi == aoki) {
    cout << "Draw" << endl;
  } else if (takahashi > aoki) {
    cout << "Takahashi" << endl;
  } else {
    cout << "Aoki" << endl;
  }

  return 0;
}