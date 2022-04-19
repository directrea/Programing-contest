#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  ll anssum = 0;
  for (int i = 1; i < N; i++) {
    anssum += i;
  }
  cout << anssum << endl;
  return 0;
}