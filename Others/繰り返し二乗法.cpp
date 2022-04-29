#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int exp_mod(int a, int n, int M) {
  if (n == 0) return 1;
  int n1 = n / 2, n2 = n % 2;
  if (n2) {
    int tmp = exp_mod(a, n1, M);
    return tmp * tmp * a % M;
  } else {
    int tmp = exp_mod(a, n1, M);
    return tmp * tmp % M;
  }
}

int main() {
  cout << exp_mod(123, 22, 1000) << endl;
  return 0;
}