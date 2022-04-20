#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int manhattanDistance(vector<int> &student, vector<int> &point) {
  int ans = abs(student[0] - point[0]) + abs(student[1] - point[1]);
  return ans;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> students(N, vector<int>(2));
  vector<vector<int>> points(M, vector<int>(2));

  rep(i, 0, N) { cin >> students[i][0] >> students[i][1]; }
  rep(i, 0, M) { cin >> points[i][0] >> points[i][1]; }

  for (vector<int> student : students) {
    int min_tmp = INT_MAX;
    int min_idx;
    for (int i = 0; i < points.size(); i++) {
      int tmp = manhattanDistance(student, points[i]);
      if (tmp < min_tmp) {
        min_idx = i, min_tmp = tmp;
      }
    }
    cout << min_idx + 1 << endl;
  }
  return 0;
}