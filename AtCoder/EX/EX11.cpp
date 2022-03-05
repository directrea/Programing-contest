#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, A, B, num;
    string op;
    cin >> n >> A;
    num = A;
    for (int i = 0; i < n; i++)
    {
        cin >> op >> B;
        if (op == "+")
        {
            num += B;
            cout << i+1 << ":" << num << endl;
        }
        else if (op == "-")
        {
            num -= B;
            cout << i+1 << ":" << num << endl;
        }
        else if (op == "/")
        {
            if (B == 0)
            {
                cout << "error" << endl;
                break;
            }
            else
            {
                num /= B;
                cout << i+1 << ":" << num << endl;
            }
        }
        else if (op == "*")
        {
            num *= B;
            cout << i+1 << ":" << num << endl;
        }
        else if (op == "?")
        {
            cout << "error" << endl;
            break;
        }
        else if (op == "=")
        {
            cout << "error" << endl;
            break;
        }
        else
        {
            cout << "error" << endl;
            break;
        }
        // ここにプログラムを追記
    }
}
