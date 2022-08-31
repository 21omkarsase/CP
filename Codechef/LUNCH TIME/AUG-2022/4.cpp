#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    // vector<int>a(n);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        m[k]++;
    }

    int cnt;
    if (n & 1)
    {
        cnt = (n / 2) + 1;
    }
    else
        cnt = n / 2;
    for (auto i : m)
    {
        if (i.second > cnt)
        {
            // cout << i.first << " first " << i.second << " sec " << cnt << " cnt " << endl;
            cout << "No" << endl;
            // cout << cnt << " no" << endl;
            return;
        }
    }
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << " ";
    // }
    // cout << endl;
    cout << "Yes" << endl;
    // cout << cnt << " yes" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}