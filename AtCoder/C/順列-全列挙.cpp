#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int factorial(int N);
vector<vector<int>> permutation(vector<int> vec, int N);

int main() {
  int N = 8;
  vector<int> test{0, 1, 2, 3, 4};
  // vector<int> test{0, 1, 2, 3, 4, 5, 6, 7};
  vector<vector<int>> vvec = permutation(test, test.size());
  for (vector<int> vec : vvec) {
    for (int sc : vec) {
      printf("%d ", sc);
    }
    cout << endl;
  }
  return 0;
}

int factorial(int N) {
  if (N == 1) {
    return N;
  }
  return N * factorial(N - 1);
}

vector<vector<int>> permutation(vector<int> vec, int N) {
  if (N == 2) {
    vector<vector<int>> tmp_vvec;
    tmp_vvec.push_back(vec);
    vector<int> tmp_vec{vec[1], vec[0]};
    tmp_vvec.push_back(tmp_vec);
    return tmp_vvec;
  }
  vector<vector<int>> ans_vvec;
  for (int i = 0; i < vec.size(); i++) {
    vector<int> tmp;
    for (int j = 0; j < vec.size(); j++) {
      if (i != j) {
        tmp.push_back(vec[j]);
      }
    }

    vector<vector<int>> tmp_vvec = permutation(tmp, N - 1);
    for (vector<int> tmp_vec : tmp_vvec) {
      vector<int> ans_vec{vec[i]};
      ans_vec.insert(ans_vec.end(), tmp_vec.begin(), tmp_vec.end());
      ans_vvec.push_back(ans_vec);
    }
  }
  return ans_vvec;
}