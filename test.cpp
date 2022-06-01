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
  cout << LCM(630, 300) << endl;

  return 0;
}