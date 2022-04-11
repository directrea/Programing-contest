#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<string>> vvec;
  for (int i = 0; i < N; i++) {
    string sei, mei;
    cin >> sei >> mei;
    vector<string> vec{sei, mei};
    vvec.push_back(vec);
  }
  map<string, int> mp;
  for (vector<string> vec : vvec) {
    for (string str : vec) {
      mp[str] = 0;
    }
  }
  for (vector<string> vec : vvec) {
    if (vec[0] == vec[1]) {
      mp[vec[1]]++;
    } else {
      mp[vec[0]]++;
      mp[vec[1]]++;
    }
  }

  bool ans_bool = true;
  for (vector<string> vec : vvec) {
    if (mp[vec[0]] > 1 && mp[vec[1]] > 1) {
      ans_bool = false;
    }
  }
  if (ans_bool) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}