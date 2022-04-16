#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

ll ans_cnt = 0;

int main() {
  string st;
  cin >> st;
  vector<char> A;
  for (char ch : st) {
    A.push_back(ch);
  }
  int W_idx;
  rep(i, 0, A.size()) {
    if (A[i] == 'B') {
      W_idx = i;
      break;
    }
  }

  for (int i = 1; i < A.size(); i++) {
    if (A[i - 1] == 'B' && A[i] == 'W') {
      ans_cnt += i - W_idx;
      A[W_idx] = 'W', A[i] = 'B';
      W_idx++;
      
    }
  }
  cout << ans_cnt << endl;
  return 0;
}