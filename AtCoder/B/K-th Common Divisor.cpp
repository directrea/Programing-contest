#include <iostream>
#include <vector>
using namespace std;

int main() {
  int A, B, K;
  cin >> A >> B >> K;
  int min;
  if (A > B) {
    min = B;
  } else {
    min = A;
  }
  vector<int> ans_vec;
  for (int i = 1; i <= min; i++) {
    if (A % i == 0 && B % i == 0) {
      ans_vec.push_back(i);
    }
  }
  
  cout << ans_vec[ans_vec.size() - K] << endl;
  return 0;
}