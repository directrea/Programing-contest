#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

long long int solve(int a, int b) {
  long long int A = a + b;
  long long int ans = pow(A, 3) - 2 * A * (a * b);
  return ans;
}

int main() {
  ll int ans_sol = 0;

  return 0;
}