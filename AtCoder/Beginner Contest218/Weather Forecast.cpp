#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<char> weather(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> weather.at(i);
    }

    if (weather.at(N-1) == 'o')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}