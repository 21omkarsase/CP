#include <iostream>
using namespace std;

// *****************T.C O(logN) or <  O(logN)************

void solve(int base, int power)
{
    int res = 1;
    while (power)
    {
        if (power & 1)
        {
            res = res * base;
            power--;
        }
        else
        {
            base = base * base;
            power /= 2;
        }
    }
    cout << res << endl;
}

int main()
{
    int a, n;
    cin >> a >> n;
    solve(a, n);
    return 0;
}

// int res = 1;
// while (n)
// {
//     if (!(n & 1))
//     {
//         a *= a, n /= 2;
//         res *= a;
//         n--;
//         continue;
//     }
//     res *= a;
//     n--;
// }
// cout << res << endl;