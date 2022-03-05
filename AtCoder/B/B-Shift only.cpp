#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    bool flag = false;
    cin >> n;

    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (ary[i] % 2 == 0)
                ary[i] /= 2;
            else
                flag = true;
        }
        if (flag)
            break;
        cnt++;
    }
    cout << cnt << endl;
}