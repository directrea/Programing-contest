#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(27, 0);
  for (int i = 0; i < N; i++) {
    string st;
    cin >> st;
    for (char c : st) A[c - 'a']++;
  }
  int anscnt = 0;
  for (int i : A)
    if (i >= K) anscnt++;
  cout << anscnt << endl;
  return 0;
}