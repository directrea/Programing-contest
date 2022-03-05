#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec.at(i);
        sum += vec.at(i);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        int abs = sum / vec.size() - vec.at(i);
        if (abs < 0)
            abs *= -1;
        cout << abs << endl;
    }
}