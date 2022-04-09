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

bool isContradiction(vector<int> &comb,
                     vector<vector<vector<int>>> &witnesses) {
  for (int i = 0; i < witnesses.size(); i++) {
    if (!comb[i]) continue;
    for (vector<int> t : witnesses[i]) {
      if (comb[t[0] - 1] != t[1]) {
        return true;
      }
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
  int ans_max = 0;
  for (vector<int> comb : combs) {
    bool ans = isContradiction(comb, witnesses);
    if (!ans) {
      int tmp_cnt = 0;
      for (int i : comb)
        if (i) tmp_cnt++;
      if (tmp_cnt > ans_max) ans_max = tmp_cnt;
    }
  }
  cout << ans_max << endl;
  return 0;
}