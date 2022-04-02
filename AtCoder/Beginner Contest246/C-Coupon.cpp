#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, tikets, val;
    cin >> N >> tikets >> val;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        A[i] = tmp;
    }
    for (int a : A)
    {
        cout << a<<" ";
    }
    cout << endl;

    for (int i = 0; i < A.size(); i++)
    {
        int syou = A[i] / val;
        cout << syou << endl;
    }
    return 0;
}
