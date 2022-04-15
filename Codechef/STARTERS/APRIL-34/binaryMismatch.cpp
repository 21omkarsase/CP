#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ld eps = 1e-9;
const ll maxn = 1e5 + 5;
const ll inf = 5e18;
const ll minf = inf;

#define mp make_pair
#define pb push_back
#define endl "\n"

void invertString(string &s)
{
    for (ll i = 0; i < s.size(); i++)
    {
        s[i] ^= '0' ^ '1';
    }
}

bool solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll ones = count(s.begin(), s.end(), '1');
    ll zeros = n - ones;

    if (ones > zeros)
    {
        invertString(s);
    }

    ll cnt = abs(zeros - ones);
    if (cnt & 1)
    {
        return false;
    }
    cnt /= 2;

    map<ll, ll> seen;
    seen[0] = 0;

    ll prefSum = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            prefSum++;
        }
        else
        {
            prefSum--;
        }

        if (seen.find(prefSum - cnt) != seen.end())
        {
            cout << "YES" << endl;
            cout << seen[prefSum - cnt] + 1 << " " << i + 1 << endl;
            return true;
        }
        seen[prefSum] = i + 1;
    }
    return false;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        if (solve())
        {
            //
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}