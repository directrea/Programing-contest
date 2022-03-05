#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> data.at(i);
    }
    int work;
    bool flag = false;

    for (int i = 0; i < 5; i++)
    {
        if (work == data.at(i))
        {
            flag = true;
            break;
        }

        work = data.at(i);
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}