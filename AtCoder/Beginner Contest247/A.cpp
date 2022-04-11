#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  vector<char> c(4);
  for (int i = 0; i < 4; i++) {
    cin >> c[i];
  }
  cout << "0";
  for (int i = 0; i < 3; i++) {
    cout <<c[i];
  }
  cout << endl;
  return 0;
}