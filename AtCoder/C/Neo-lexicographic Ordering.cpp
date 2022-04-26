#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

vector<int> sortstr(vector<char> dicvec, string str) {
  vector<int> conv;
  for (char c : str) {
    for (int i = 0; i < dicvec.size(); i++) {
      if (c == dicvec[i]) conv.push_back(i);
    }
  }
  return conv;
}

int main() {
  string dict;
  cin >> dict;

  vector<char> dicvec;
  for (char c : dict) {
    dicvec.push_back(c);
  }

  int N;
  cin >> N;
  vector<vector<int>> conved;
  for (int i = 0; i < N; i++) {
    string str;
    cin >> str;
    conved.push_back(sortstr(dicvec, str));
  }

  priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
  for (vector<int> conv : conved) pq.push(conv);

  while (pq.size()) {
    for (int idx : pq.top()) cout << dicvec[idx];
    cout << endl;
    pq.pop();
  }

  return 0;
}