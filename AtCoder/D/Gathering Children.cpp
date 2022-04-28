#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

bool ismatchary(vector<int> &A, vector<int> &B) {
  bool ans = true;
  for (int i = 0; i < A.size(); i++) {
    if (A[i] != B[i]) ans = false;
  }
  return ans;
}

void movechilds(vector<char> const &A, vector<int> &childs) {
  vector<int> tmpchild = childs;
  for (int j = 0; j < childs.size(); j++) {
    if (A[j] == 'R') {
      tmpchild[j + 1] += childs[j];
      tmpchild[j] -= childs[j];
    } else {
      tmpchild[j - 1] += childs[j];
      tmpchild[j] -= childs[j];
    }
  }
  childs = tmpchild;
}

int main() {
  string str;
  cin >> str;
  vector<char> A;
  for (char c : str) {
    A.push_back(c);
  }

  vector<int> childs(str.size(), 1);
  vector<int> bfchilds = childs;
  int cnt = 0;
  while (true) {
    cnt++;
    // for (int num : childs) cout << num;
    // cout << endl;
    movechilds(A, childs);
    if (str.size() > cnt && cnt % 2 == 0) {
      if (ismatchary(bfchilds, childs))
        break;
      else
        bfchilds = childs;
    }
  }
  for (int i = 0; i < childs.size(); i++) {
    if (i)
      cout << " " << childs[i];
    else
      cout << childs[i];
  }
  cout << endl;
  return 0;
}