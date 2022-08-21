#include <bits/stdc++.h>
using namespace std;

// print total numbers of prime numbers(0 to current no), for all numbers from l to r

// contraints
//  1<=T<=10^5
//  1<=L<=R<=10^6

#define ll long long
#define n 1000001
vector<bool> a(n, 0);
vector<int> pp(n, 0);

void solve()
{
    a[0] = a[1] = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (!a[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                a[j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (!a[i])
            cnt++;

        if (!a[cnt])
            pp[i] = 1;
        else
            pp[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        pp[i] += pp[i - 1]; // pp must be int if it is bool we can't store int
    }
}

int main()
{
    solve();

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        // for (int i = 1; i < n; i++)
        // {
        //      if here we check cnt and acc to cnt if we cal ans for t testcases we ill get template
        //      HENCE WE CALCULATE SUM OF PRIME PRIME NO BY STORING THEM IN SEPRATE PP ARRAY
        // }

        cout << pp[r] - pp[l - 1] << endl;
        // AND NOW WE CAN ANS IN CONST TIME
    }

    return 0;
}