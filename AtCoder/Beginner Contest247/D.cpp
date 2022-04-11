#include <deque>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  deque<pair<ll, ll>> dq;  // pair<値, 個数>
  for (int i = 0; i < N; i++) {
    int query, x, c;
    cin >> query;
    switch (query) {
      case 1:
        cin >> x >> c;
        dq.push_back({x, c});
        break;
      case 2:
        cin >> c;
        ll ans_sum = 0;
        while (c) {
          if (c >= dq.front().second) {
            c -= dq.front().second;
            ans_sum += dq.front().first * dq.front().second;
            dq.pop_front();
          } else {
            dq.front().second -= c;
            ans_sum += dq.front().first * c;
            c = 0;
          }
        }
        cout << ans_sum << endl;
        break;
    }
  }
  return 0;
}