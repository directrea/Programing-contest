#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    bool P = false, W = false, G = false, Y = false;
    string color;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> color;
        if (color == "P")
        {
            P = true;
        }
        if (color == "W")
        {
            W = true;
        }
        if (color == "G")
        {
            G = true;
        }
        if (color == "Y")
        {
            Y = true;
        }
    }
    cnt = P + W + G + Y;
    if (cnt == 3)
    {
        cout << "Three" << endl;
    }
    else
    {
        cout << "Four" << endl;
    }
}