#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (str.at(i) == '1')
            cnt++;
    }
    cout << cnt << endl;
}