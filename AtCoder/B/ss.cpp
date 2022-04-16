#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

bool isss(string A, string B) {
  if (A == B)
    return true;
  else
    return false;
}

int main() {
  string st;
  cin >> st;
  st.pop_back();
  if (st.size() % 2 == 1) {
    st.pop_back();
  }
  string A, B;
  do {
    A = "", B = "";
    int mid = st.size() / 2;
    rep(i, 0, mid) A.push_back(st[i]);
    rep(i, mid, st.size()) B.push_back(st[i]);
    if (isss(A, B)) break;
    st.pop_back(), st.pop_back();
  } while (A.size());
  cout << A.size() * 2 << endl;
  
  return 0;
}