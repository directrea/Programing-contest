#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int factorial(int N);
vector<vector<int>> permutation(int N);
double distamce(vector<int> a, vector<int> b) {
  return sqrt(pow(a[0]-b[0], 2) + pow(a[1]-b[0], 2));
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
  vector<vector<int>> perm = permutatiobn(N);
  double ans_sum = 0;
  for 

  return 0;
}

int factorial(int N) {
  if (N == 1) {
    return N;
  }
  return N * factorial(N - 1);
}

vector<vector<int>> permutatiobn(int N) {
  vector<int> vec;
  for (int i = 0; i < N; i++) {
    vec.push_back(i);
  }
  return permutation_rec(vec, N);
}

vector<vector<int>> permutation_rec(vector<int> vec, int N) {
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
    vector<vector<int>> tmp_vvec = permutation_rec(tmp, N - 1);
    for (vector<int> tmp_vec : tmp_vvec) {
      vector<int> ans_vec{vec[i]};
      ans_vec.insert(ans_vec.end(), tmp_vec.begin(), tmp_vec.end());
      ans_vvec.push_back(ans_vec);
    }
  }
  return ans_vvec;
}