#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

ll GCD(ll A, ll B) {
  if (A < B) swap(A, B);
  while (B) {
    A -= B;
    if (A < B) swap(A, B);
  }
  return A;
}

ll LCM(ll A, ll B) { return (A * B) / GCD(A, B); }

int main() {
  ll N;
  ll A, B;
  cin >> N >> A >> B;
  ll asum = 0;
  for (int i = 0; i <= N / A; i++) asum += i * A;
  ll bsum = 0;
  for (int i = 0; i <= N / B; i++) bsum += i * B;
  ll lcm = LCM(A, B), lcmsum = 0;
  for (int i = 0; i <= N / lcm; i++) lcmsum += i * lcm;

  cout << N * (N + 1) / 2 - (asum + bsum - lcmsum) << endl;
  return 0;
}