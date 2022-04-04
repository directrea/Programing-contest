#include <math.h>

#include <iostream>
#include <vector>
using namespace std;

int F(int A, int B) {
  int max_F;
  max_F = max(A, B);
  int digits_cnt = 0;
  while (max_F > 0) {
    max_F /= 10;
    digits_cnt++;
  }
  return digits_cnt;
}

int main() {
  long long N;
  cin >> N;
  // cout << N << endl;
  int N_sqrt = sqrt(N);
  // cout << N_sqrt << endl;
  int ans;
  for (int i = N_sqrt; 0 < i; i--) {
    if (N % i == 0) {
      ans = F(i, N / i);
      break;
    }
  }
  cout << ans << endl;
  return 0;
}