#include <iostream>
#include <vector>
using namespace std;

int main() {
  int A, B, AB, X, Y;
  cin >> A >> B >> AB >> X >> Y;

  int A_cnt = X, B_cnt = Y, AB_cnt = 0;

  if (AB * 2 < A + B) {
    int tmp = min(A_cnt, B_cnt);
    A_cnt -= tmp, B_cnt -= tmp, AB_cnt += tmp * 2;
  }

  if (A_cnt && AB * 2 < A) {
    AB_cnt += 2 * A_cnt, A_cnt = 0;
  }
  if (B_cnt && AB * 2 < B) {
    AB_cnt += 2 * B_cnt, B_cnt = 0;
  }

  // printf("A:%d, B:%d, AB:%d\n", A_cnt, B_cnt, AB_cnt);
  cout << A * A_cnt + B * B_cnt + AB * AB_cnt << endl;

  return 0;
}