#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, numCopy, sum = 0;
    cin >> num;
    numCopy = num;
    int ten = 1, cnt = 0;
    while (true)
    {
        if (num < ten)
            break;
        cnt++;
        ten *= 10;
    }
    for (int i = cnt - 1; i >= 0; i--)
    {
        sum += num / int(pow(10, i));
        num = num % int(pow(10, i));
    }
    if (numCopy % sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}