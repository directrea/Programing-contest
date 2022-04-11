#include <bits/stdc++.h>

#include <string>
using namespace std;
#define intt long long
#define pb push_back
#define pf push_front
#define pi pair<int, int>
#define pll pair<ll, ll>
#define in insert
#define AK ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define e endl
#define sc second
#define fr first
#define ll long long
#define Vi vector<int>
#define Vpi vector<pair<int, int> >
#define Vll vector<ll>
#define all(a) a.begin(), a.end()
#define Sort(a) sort(all(a))
#define Rev(a) reverse(all(a))
#define yes cout << "YES" << e
#define no cout << "NO" << e
#define VVi vector<Vi>
#define VVll vector<Vll>
#define deb(x) cout << #x << " = " << x << e;
#define stldeb(x)                        \
  {                                      \
    cout << #x << " = ";                 \
    for (auto it : x) cout << it << " "; \
    cout << e;                           \
  }
deque<pll> dq;
int main() {
  AK intt Q, x, c, c1, type;
  cin >> Q;
  while (Q--) {
    cin >> type;
    if (type == 1) {
      cin >> x >> c;
      dq.pb({c, x});
    } else {
      cin >> c1;
      ll sum = 0;
      while (c1) {
        /*for(auto it : dq)
           cout<< it.fr << " " << it.sc << e;
        /* 10 2
           c= 5;
           sum=10;
        */
        if (dq.front().fr >= c1)
          sum += (c1 * dq.front().sc),
              dq.front() = {dq.front().fr - c1, dq.front().sc}, c1 = 0;
        else {
          sum += (dq.front().fr * dq.front().sc), c1 -= (dq.front().fr),
              dq.pop_front();
        }
      }
      cout << sum << e;
    }
  }
  return 0;
}
