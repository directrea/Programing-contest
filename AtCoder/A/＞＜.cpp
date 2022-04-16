#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string st;
  cin >> st;
  vector<char> A;
  for (char c : st) A.push_back(c);
  int N = A.size();

  vector<int> ans_vec(N + 1, 0);
  deque<int> zeroq;
  deque<int> undec;

  if (A[0] == '<') {
    zeroq.push_back(0);
  }
  if (A[N - 1] == '>') {
    zeroq.push_back(ans_vec.size() - 1);
  }

  for (int i = 0; i < N - 1; i++) {
    if (A[i] == '>' && A[i + 1] == '<') {
      zeroq.push_back(i + 1);
    } else if (A[i] == '<' && A[i + 1] == '>') {
      undec.push_back(i + 1);
    }
  }

  while (zeroq.size()) {
    int tmpidx = zeroq.front();
    while (tmpidx--) {
      if (tmpidx == 0) {
        if (A[tmpidx] == '>') {
          ans_vec[tmpidx] = ans_vec[tmpidx + 1] + 1;
        }
      } else {
        if (A[tmpidx - 1] == '<' && A[tmpidx] == '>')
          break;
        else
          ans_vec[tmpidx] = ans_vec[tmpidx + 1] + 1;
      }
    }
    tmpidx = zeroq.front();
    zeroq.pop_front();
    while (tmpidx++ < ans_vec.size() - 1) {
      if (tmpidx == ans_vec.size() - 1) {
        if (A[tmpidx - 1] == '<') {
          ans_vec[tmpidx] = ans_vec[tmpidx - 1] + 1;
        }
      } else {
        if (A[tmpidx - 1] == '<' && A[tmpidx] == '>')
          break;
        else
          ans_vec[tmpidx] = ans_vec[tmpidx - 1] + 1;
      }
    }
  }
  while (undec.size()) {
    int tmpidx = undec.front();
    undec.pop_front();
    ans_vec[tmpidx] = max(ans_vec[tmpidx - 1], ans_vec[tmpidx + 1]) + 1;
  }

  ll anssum = 0;
  for (int i : ans_vec) anssum += i;
  cout << anssum << endl;
  return 0;
}