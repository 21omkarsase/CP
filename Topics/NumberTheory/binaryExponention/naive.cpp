#include <bits/stdc++.h>
using namespace std;

// ***************T.C O(n)******************
void solve(int a, int n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= (long long)a;
        cout << res << " res" << endl;
    }
    cout << a << " ^ " << n << " : " << res << endl;
    cout << pow(8, 3) << endl;
}

int main()
{
    int a, n;
    cin >> a >> n;
    solve(a, n);
    return 0;
}