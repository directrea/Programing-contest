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
  long long ans = 0;

  for (int i : A) {
    ans += i;
  }

  long long used_tikets = 0;
  for (int i : A) used_tikets += i / val;
  used_tikets = min(tikets, used_tikets);
  ans -= val * used_tikets;
  tikets -= used_tikets;

  for (int i = 0; i < A.size(); i++) A[i] %= val;
  sort(A.begin(), A.end());
  for (int i = 0; i < tikets; i++) {
    if (A.size()) {
      ans -= A.back();
      A.pop_back();
    } else {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
