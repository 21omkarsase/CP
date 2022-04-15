#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, count0 = 0, count1 = 0;
    cin >> n >> k;

    string s;
    cin >> s;

    int xo = 0;

    for (int i = 0; i < n; i++)
    {
        xo ^= (s[i] - '0');
        if (xo == 0)
        {
            count0++;
        }
    }
    if (count0 >= k && xo != 1)
    {
        cout << "YES" << endl;
        return;
    }

    xo = 0;

    for (int i = 0; i < n; i++)
    {
        xo ^= (s[i] - '0');
        if (xo == 1)
        {
            count1++;
            xo = 0;
        }
    }
    if (count1 >= k and (count1 - k) % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    solve();
    return 0;
}