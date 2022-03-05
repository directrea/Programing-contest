#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, e, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        sum += e - (s - 1);
    }
    cout << sum << endl;
}