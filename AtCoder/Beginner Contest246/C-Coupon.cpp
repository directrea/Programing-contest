#include <stdio.h>
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
        cout << a;
    }

    for (int i = 0; i < sizeof(A); i++)
    {
        int syou = A[i] / val;
        cout << syou << endl;
    }
}
