#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> pair_ary;

    for (int i = 0; i < N; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        pair_ary.push_back(make_pair(a, b));
    }

    vector<pair<int, int>> sort_ary;

    for (int i = 0; i < N; i++)
    {
        sort_ary.push_back(make_pair(pair_ary.at(i).second, i));
    }
    sort(sort_ary.begin(), sort_ary.end());
    for (int i = 0; i < N; i++)
    {
        cout << pair_ary.at(sort_ary.at(i).second).first << " " << pair_ary.at(sort_ary.at(i).second).second << endl;
    }
}
