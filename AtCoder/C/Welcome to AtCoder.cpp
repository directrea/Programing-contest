#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<bool> A(N, false);
  vector<int> penacntary(N, 0);

  for (int i = 0; i < M; i++) {
    int q;
    string ac;
    cin >> q >> ac;

    if (ac == "AC") {
      A[q - 1] = true;
    } else {
      if (!A[q - 1]) penacntary[q - 1]++;
    }
  }
  int accnt = 0, penacnt = 0;
  for (int i = 0; i < A.size(); i++) {
    if (A[i]) accnt++, penacnt += penacntary[i];
  }
  printf("%d %d\n", accnt, penacnt);
  return 0;
}