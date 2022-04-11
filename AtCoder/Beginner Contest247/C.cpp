#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> S;
  vector<int> tmp{1};
  S.push_back(tmp);
  for (int i = 1; i < N; i++) {
    vector<int> tmp{S[i - 1]};
    tmp.insert(tmp.end(), {i + 1});
    tmp.insert(tmp.end(), S[i - 1].begin(), S[i - 1].end());
    S.push_back(tmp);
  }
  tmp = S[S.size() - 1];
  for (int i = 0; i < tmp.size(); i++) {
    if (i) {
      cout << " " << tmp[i];
    } else {
      cout << tmp[i];
    }
  }
  cout << endl;
  return 0;
}