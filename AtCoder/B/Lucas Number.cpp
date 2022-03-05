#include <bits/stdc++.h>
using namespace std;

long Lucas(int N)
{
    if (N == 0)
        return 2;
    if (N == 1)
        return 1;
    vector<long> memo{2, 1};
    for (int i = 2; i <= N; i++)
    {
        memo.push_back(memo.at(i - 2) + memo.at(i - 1));
    }
    return memo.at(N);
}

int main()
{
    int N;
    cin >> N;

    cout << Lucas(N) << endl;
}