#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  string st;
  int N;
  cin >> st >> N;

  sort(all(st));
  int cnt = 0;
  do {
    cnt++;
    if (cnt == N) printf("%s\n", st.c_str());
    
  } while (next_permutation(all(st)));

  return 0;
}