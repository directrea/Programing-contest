#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string st = "abcd";
  string A, B;
  int mid = st.size() / 2;
  rep(i, 0, mid) A.push_back(st[i]);
  rep(i, mid, st.size()) B.push_back(st[i]);

  return 0;
}