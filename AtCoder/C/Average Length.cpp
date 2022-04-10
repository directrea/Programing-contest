#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

double distamce(vector<int> x, vector<int> y) {
  return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
  int N;
  cin >> N;
  vector<vector<int>> vvec;
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    vector<int> tmp{x, y};
    vvec.push_back(tmp);
  }
  return 0;
}