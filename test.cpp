#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  ll sum = 0;
  for (int i = 1; i <= 1000000000; i++) sum += i;
  cout << sum << endl;

  return 0;
}