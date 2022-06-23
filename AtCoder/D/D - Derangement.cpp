#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    tmp--;
    A[i] = tmp;
  }
  queue<int> q;
  for (int i = 0; i < A.size(); i++) {
    if (i == A[i]) q.push(i);
  }
  int ans = 0;
  while (!q.empty()) {
    int f = q.front();
    q.pop();
    if (!q.empty()) {
      if (f + 1 == q.front()) {
        q.pop();
        ans++;
        continue;
      }
    }
    ans++;
  }
  printf("%d\n", ans);

  return 0;
}