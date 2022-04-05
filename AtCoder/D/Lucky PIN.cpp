#include <math.h>

#include <iostream>
#include <set>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  vector<int> A;
  cin >> N;
  char c;
  for (int i = 0; i < N; i++) {
    cin >> c;
    A.push_back(int(c) - 48);
  }

  // for (int i : A) printf("%d ", i);

  set<int> pass;
  for (int i = 0; i < N - 2; i++) {
    for (int j = i + 1; j < N - 1; j++) {
      for (int k = j + 1; k < N; k++) {
        pass.insert(A[i] * 100 + A[j] * 10 + A[k] * 1);
      }
    }
  }
  cout << pass.size() << endl;
  return 0;
}