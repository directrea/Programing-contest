#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<vector<bool>> combs;
void rec(vector<bool> &comb, int N) {
  if (N == -1) {
    combs.push_back(comb);
    return;
  }
  rec(comb, N - 1);
  comb[N] = 1;
  rec(comb, N - 1);
  comb[N] = 0;
}

void makeComb(int N) {
  vector<bool> comb(N, 0);
  rec(comb, N - 1);
}

bool isLight(vector<bool> &Switch, vector<int> &light_bulb, int condition) {
  int on_cnt = 0;
  for (int i : light_bulb) {
    if (Switch[i]) {
      on_cnt++;
    }
  }
  if ( on_cnt % 2 == condition) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> light_bulbs(M);
  for (int i = 0; i < M; i++) {
    int tmp;
    cin >> tmp;
    vector<int> tmp_vec(tmp);
    for (int i = 0; i < tmp; i++) {
      int tmp;
      cin >> tmp;
      tmp--;
      tmp_vec[i] = tmp;
    }
    light_bulbs[i] = tmp_vec;
  }
  vector<int> conditions(M);
  for (int i = 0; i < M; i++) {
    int tmp;
    cin >> tmp;
    conditions[i] = tmp;
  }

  makeComb(N);
  int ans_cnt = 0;
  for (vector<bool> Switch : combs) {
    bool ans_bool = true;
    for (int i = 0; i < M; i++) {
      bool tmp_bool = isLight(Switch, light_bulbs[i], conditions[i]);
      ans_bool = ans_bool && tmp_bool;
    }
    if (ans_bool) {
      // for (bool b : Switch) {
      //   cout << b;
      // }
      // cout << endl;
      ans_cnt++;
    }
  }
  cout << ans_cnt << endl;
  return 0;
}