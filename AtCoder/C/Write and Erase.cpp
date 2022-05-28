#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  set<int> st;
  int N;
  cin >> N;
  rep(i, 0, N) {
    int tmp;
    cin >> tmp;
    if (st.erase(tmp) == 0) st.insert(tmp);
  }
  cout << st.size() << endl;
  return 0;
}