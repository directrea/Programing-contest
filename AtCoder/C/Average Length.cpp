#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;

int factorial(int N);

int N;
vector<int> X(8), Y(8);
int main() {
  int N;
  cin >> N;
  rep(i, 0, N) cin >> X[i] >> Y[i];

  vector<int> ord(N);
  rep(i, 0, N) ord[i] = i;
  double ans_sum = 0;
  do {
    rep(i, 0, N - 1) {
      int a = ord[i];
      int b = ord[i + 1];
      ans_sum += sqrt(pow(X[a] - X[b], 2) + pow(Y[a] - Y[b], 2));
    }
  } while (next_permutation(all(ord)));
  ans_sum /= factorial(N);
  cout << fixed << setprecision(6) << ans_sum << endl;
  return 0;
}

int factorial(int N) {
  if (N == 1) {
    return N;
  }
  return N * factorial(N - 1);
}
