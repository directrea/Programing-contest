#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string str;
  cin >> str;
  string key = "keyence";
  int idx = 0;
  for (char c : str) {
    if (key[idx] == c) idx++;
    if (idx == key.size()) break;
  }
  if (idx == key.size())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}