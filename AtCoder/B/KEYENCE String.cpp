#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string str;
  cin >> str;
  int n = str.size();
  string key = "keyence";

  for (int i = 0; i < n; i++) {
    int idx = 0;
    string ansstr = "";
    if (str[i] == key[0]) {
      while (str[i] == key[idx]) {
        if (ansstr == key) {
          cout << "YES" << endl;
          return 0;
        }
        ansstr += key[idx];
        i++, idx++;
      }

      // idx++;
      for (int j = i + 1; j < n; j++) {
        string secansstr = ansstr;
        int secidx = idx;
        int tmpj = j;
        while (str[tmpj] == key[secidx]) {
          if (secansstr == key) {
            cout << "YES" << endl;
            return 0;
          }
          secansstr += key[secidx];
          tmpj++, secidx++;
        }
        if (secansstr == key) {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}