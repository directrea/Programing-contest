#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int ans_cnt = 0;
bool irreversible(vector<char> &A, int i) {
  if (A[i - 1] == 'B' && A[i] == 'W') {
    A[i - 1] = 'W', A[i] = 'B';
    ans_cnt++;
    return true;
  }
  return false;
}

int main() {
  string st;
  cin >> st;
  vector<char> A;
  for (char ch : st) {
    A.push_back(ch);
  }

  for (int i = 1; i < A.size(); i++) {
    if (irreversible(A, i)) {
      int tmp_i = i - 1;
      while (tmp_i > 0) {
        if (irreversible(A, tmp_i)) {
          tmp_i--;
        } else {
          break;
        }
      }
    }
  }
  cout << ans_cnt << endl;
  return 0;
}