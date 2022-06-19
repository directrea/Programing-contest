#include<bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
  int N;
  cin >> N;
  ll ans;
  ans = 1 << N;
  printf("%lld\n",ans);
  
  return 0;
}