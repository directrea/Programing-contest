#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(200000 + 1, 0);
  for (int i = 0; i <= 200000; i++) {
    A[i] = i;
  }
  set<int> S(all(A));
  A.clear();
  
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    S.erase(tmp);
    printf("%d\n", *S.begin());
  }

  return 0;
}