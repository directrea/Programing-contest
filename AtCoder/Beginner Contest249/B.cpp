#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string st;
  cin >> st;
  vector<int> A(200, 0);
  bool exoomoji = false, exkomoji = false;
  for (char c : st) {
    if (islower(c)) exkomoji = true;
    if (isupper(c)) exoomoji = true;
    A[(int)c]++;
  };
  bool notjyuuhuku = true;
  for (int i : A)
    if (i > 1) notjyuuhuku = false;

  if (exoomoji && exkomoji && notjyuuhuku)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}