#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> alphabet{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < 26; i++)
    {
        int num;
        cin >> num;
        cout << alphabet.at(num-1);
    }
    cout << endl;
}