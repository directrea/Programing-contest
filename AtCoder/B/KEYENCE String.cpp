#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string str;
  // str = "keyofscience";
  cin >> str;
  string key = "keyence";

  int N = str.size();
  int top = key.size(), tail = N - 1;
  while (top >= 0) {
    string ptop = "";
    for (int i = 0; i < top; i++) {
      ptop += str[i];
    }
    // cout << ptop << " ";
    string ptail = "";
    for (int i = tail + 1; i < N; i++) {
      ptail += str[i];
    }
    // cout << ptail << " ";
    // cout << ptop + ptail << endl;
    if (ptop + ptail == key) {
      cout << "YES" << endl;
      return 0;
    }

    top--, tail--;
  }
  cout << "NO" << endl;
  return 0;
}