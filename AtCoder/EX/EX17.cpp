#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S, cnt = 0;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> P.at(i);
    }

    for (int a : A)
    {
        for (int p : P)
        {
            if (a + p == S)
                cnt++;
        }
    }
    cout << cnt << endl;
}