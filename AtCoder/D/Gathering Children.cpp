#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string str;
  cin >> str;
  int cnt = 0;
  vector<char> lr;
  vector<int> cnts;
  int idx = 0;
  while (idx < str.size()) {
    char mozi = str[idx];
    lr.push_back(mozi);
    int cnt = 0;
    while (idx < str.size() && mozi == str[idx]) {
      cnt++;
      idx++;
    }
    cnts.push_back(cnt);
  }

  // for (char c : lr) cout << c << " ";
  // cout << endl;
  // for (int i : cnts) cout << i << " ";
  // cout << endl;
  vector<int> anscnts = cnts;
  for (int i = 0; i < lr.size(); i++) {
    int wari = cnts[i] / 2;
    if (wari) {
      if (lr[i] == 'R')
        anscnts[i] -= wari, anscnts[i + 1] += wari;
      else
        anscnts[i] -= wari, anscnts[i - 1] += wari;
    }
  }
  // for (char c : lr) cout << c << " ";
  // cout << endl;
  // for (int i : anscnts) cout << i << " ";
  // cout << endl;
  vector<int> ansvec;
  for (int i = 0; i < cnts.size(); i++) {
    if (lr[i] == 'R') rep(j, 0, cnts[i] - 1) ansvec.push_back(0);
    ansvec.push_back(anscnts[i]);
    if (lr[i] == 'L') rep(j, 0, cnts[i] - 1) ansvec.push_back(0);
  }
  for (int i = 0; i < ansvec.size(); i++) {
    if (i)
      cout << ' ' << ansvec[i];
    else
      cout << ansvec[i];
  }
  cout << endl;
  return 0;
}