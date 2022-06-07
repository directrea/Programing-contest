#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> se;
  int orisc = 0;
  int ansidx = 0;
  for (int i = 0; i < N; i++) {
    string st;
    int score;
    cin >> st >> score;
    if (se.count(st)) {
    } else {
      se.insert(st);
      if (score > orisc) {
        ansidx = i;
        orisc = score;
      }
    }
  }
  cout << ansidx + 1 << endl;
  return 0;
}