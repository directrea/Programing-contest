#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<vector<bool>> combs;
void rec(vector<bool> &comb, int N) {
  if (N == -1) {
    combs.push_back(comb);
    return;
  }
  rec(comb, N - 1);
  comb[N] = 1;
  rec(comb, N - 1);
  comb[N] = 0;
}

void makeComb(int N) {
  vector<bool> comb(N, 0);
  rec(comb, N - 1);
}

int main() {
  makeComb(3);
  for (vector<bool> comb : combs) {
    for (bool i : comb) cout << i;
    cout << endl;
  }
  return 0;
}