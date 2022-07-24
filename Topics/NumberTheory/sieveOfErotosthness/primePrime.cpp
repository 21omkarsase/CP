#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define n 1000000

bool a[n + 1];
int pp[n + 1];

void solve(int l, int r)
{
    a[0] = a[1] = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (!(i & 1))
        {
            for (ll j = i * i; j <= n; j += i)
            {
                a[j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (!a[i])
        {
            cnt++;
        }
    }
}

int main()
{
    int l, r;
    cin >> l >> r;
    solve(l, r);
    return 0;
}