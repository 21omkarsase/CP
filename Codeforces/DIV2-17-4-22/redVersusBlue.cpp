#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // int n, r, b;
        // cin >> n >> r >> b;

        // char a[n];
        // for (int i = 0; i < n; i++)
        // {
        //     a[i] = 'R';
        // }
        // char B[n];
        // for (int i = 0; i < n; i++)
        // {
        //     B[i] = 'R';
        // }

        // int bCount = b;
        // int bCount2 = b;
        // int fact = (r - b) % 2;
        // int initial = (r - b) / 2;

        // if ((r - b) == 1)
        // {
        //     for (int i = 1; i < n; i += 2)
        //     {
        //         a[i] = 'B';
        //     }
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << a[i];
        //     }
        //     return 0;
        // }

        // if (fact == 0)
        // {
        //     for (int i = initial; i < n; i += initial + 1)
        //     {
        //         if (bCount >= 1)
        //         {
        //             a[i] = 'B';
        //             bCount--;
        //         }
        //     }
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << a[i];
        //     }
        //     return 0;
        // }
        // else
        // {
        //     for (int i = initial - 1; i < n; i += initial)
        //     {
        //         if (bCount >= 1)
        //         {
        //             a[i] = 'B';
        //             bCount--;
        //         }
        //     }
        //     for (int i = initial; i < n; i += initial + 1)
        //     {
        //         if (bCount2 >= 1)
        //         {
        //             B[i] = 'B';
        //             bCount2--;
        //         }
        //     }
        // }
        // int first = 0;
        // int second = 0;
        // for (int i = n - 1; i >= 0; i--)
        // {
        //     first++;
        //     if (a[i] == 'B')
        //     {
        //         break;
        //     }
        // }
        // cout << endl;
        // for (int i = n - 1; i >= 0; i--)
        // {
        //     second++;
        //     if (B[i] == 'B')
        //     {
        //         break;
        //     }
        // }
        // cout << endl;
        // if (first < second)
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << a[i];
        //     }
        // }
        // else
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << B[i];
        //     }
        // }

        int n, r, b;
        cin >> n >> r >> b;

        int mina = r / (b + 1);
        int cntb = (r % (b + 1));
        string s;

        for (int i = 0; i < (b + 1 - cntb); i++)
        {
            string ss(mina, 'R');
            s += ss;
            s += 'B';
        }
        for (int i = 0; i < cntb; i++)
        {
            string ss(mina + 1, 'R');
            s += ss;
            s += 'B';
        }
        s.pop_back();
        cout << s << endl;
    }
    return 0;
}