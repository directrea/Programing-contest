#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long N, tikets, val;
  cin >> N >> tikets >> val;
  vector<long long> A(N);
  for (int i = 0; i < A.size(); i++) cin >> A[i];

  // printf("-------------\n");
  for (int i = 0; i < A.size(); i++) {
    int used_tikets = min(A[i] / val, tikets);
    A[i] %= val;
    tikets -= used_tikets;
  }
  // for (long long i : A) {
  //   printf("%d ", i);
  // }
  // cout << endl;

  sort(A.begin(), A.end());
  while (tikets && A.size()) {
    A.pop_back();
    tikets--;
  }
  // for (int i : A) {
  //   printf("%ld ", i);
  // }
  // cout << endl;
  long long ans = 0;
  for (long long i : A) ans += i;
  cout << ans << endl;

  return 0;
}
