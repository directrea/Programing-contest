#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> test{10, 100, 200};
  int tmp = test.back();
  test.pop_back();
  cout << tmp << endl;
  return 0;
}