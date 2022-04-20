#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(pow(10, 5) + 2, 0);

  rep(i, 0, N) {
    int tmp;
    cin >> tmp;
    tmp++;
    A[tmp - 1]++, A[tmp]++, A[tmp + 1]++;
  }

  int ans_max = 0;
  for (int i : A) ans_max = max(ans_max, i);

  cout << ans_max << endl;
  return 0;
}