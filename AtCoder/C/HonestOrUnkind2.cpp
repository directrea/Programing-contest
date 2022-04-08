#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<vector<int>> combs;
void rec(vector<int> &vec, int N) {
  if (N == -1) {
    combs.push_back(vec);
    return;
  }
  vec[N] = 0;
  rec(vec, N - 1);
  vec[N] = 1;
  rec(vec, N - 1);
}
void makeComb(int N) {
  vector<int> tmp_vec(N, 0);
  rec(tmp_vec, N - 1);
}

bool isContradiction(vector<int> &comb, vector<vector<vector<int>>> witnesses) {
  for (vector<int> t : testimonys) {
    switch (t[1]) {
      case 0:
        if (comb[t[0] - 1] == t[1]) {
          return true;
        }
        break;
      case 1:
        if (comb[t[0] - 1] != t[1]) {
          return true;
        }
        break;
    }
  }
  return false;
}

int main() {
  int N;
  cin >> N;

  vector<vector<vector<int>>> witnesses;
  for (int i = 0; i < N; i++) {
    int ts;
    cin >> ts;
    vector<vector<int>> testimonys;
    for (int i = 0; i < ts; i++) {
      int x, y;
      cin >> x >> y;
      vector<int> testimony{x, y};
      testimonys.push_back(testimony);
    }
    witnesses.push_back(testimonys);
  }
  makeComb(N);
  vector<vector<int>> answers;
  // for (vector<int> comb : combs) {
  vector<int> comb{1, 1, 1};
  bool ans = false;
  for (vector<vector<int>> ts : witnesses) {
    bool tmp = isContradiction(comb, ts);
    ans = ans || tmp;
    if (ans) {
      break;
    }
  }
  if (!ans) {
    answers.push_back(comb);
  }
  // }
  return 0;
}