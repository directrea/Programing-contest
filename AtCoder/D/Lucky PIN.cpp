#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    char c;
    cin >> c;
    A[i] = (int)c - 48;
  }
  // for (int i : A) printf("%d ", i);
  int ans = 0;
  for (int i = 0; i < 1000; i++) {
    vector<int> PIN{i / 100, (i / 10) % 10, i % 10};
    int PIN_idx = 0;
    for (int i : A) {
      if (PIN[PIN_idx] == i) {
        PIN_idx++;
      }
      if (PIN_idx == 3) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}