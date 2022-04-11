#include <deque>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  deque<ll> val;
  deque<ll> amount;
  for (int i = 0; i < N; i++) {
    int query, x, c;
    cin >> query;
    switch (query) {
      case 1:
        cin >> x >> c;
        val.push_back(x);
        amount.push_back(c);
        break;
      case 2:
        cin >> c;
        ll ans_sum = 0;
        while (c) {
          if (c >= amount.front()) {
            c -= amount.front();
            ans_sum += val.front() * amount.front();
            val.pop_front(), amount.pop_front();
          } else {
            amount[0] -= c;
            ans_sum += val.front() * c;
            c = 0;
          }
        }
        cout << ans_sum << endl;
        break;
    }
  }
  return 0;
}