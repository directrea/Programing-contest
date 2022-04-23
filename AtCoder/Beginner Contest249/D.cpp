#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(pow(10, 5) * 2 + 1, 0);
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    A[tmp]++;
  }
  ll anscnt = 0;
  for (int i = 1; i <= A.size(); i++) {
    for (int j = 1; i * j <= A.size(); j++) {
      anscnt += (long long)A[i] * A[j] * A[i * j];
    }
  }
  cout << anscnt << endl;
  return 0;
}