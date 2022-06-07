#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> vec(N);
  vector<int> idxs(N);
  rep(i, 0, N) {
    vec[i] = i;
    idxs[i] = i;
  }
  for (int i = 0; i < Q; i++) {
    int x;
    cin >> x;
    x--;
    int idx = idxs[x];
    int lr = 0;

    if (idx == N - 1)
      lr--;
    else
      lr++;

    swap(vec[idx], vec[idx + lr]);
    swap(idxs[vec[idx]], idxs[vec[idx + lr]]);
  }

  for (int i = 0; i < N; i++) {
    if (i)
      cout << ' ' << vec[i] + 1;
    else
      cout << vec[i] + 1;
  }
  cout << endl;
  return 0;
}