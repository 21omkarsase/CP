// Problem
// Alice jogs everyday to keep herself fit and active. She noticed that she burns XX calories when jogging the first kilometer, and for K \gt 1K>1, jogging the K^{th}K
// th
//   kilometer burns calories equivalent to the total number of calories burned while jogging the first K-1K−1 kilometers.

// What is the total number of calories that Alice burns after jogging for NN kilometers? The answer can be very large, so report it modulo 10^9 + 710
// 9
//  +7 (10000000071000000007).

// Input Format
// The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
// The first and only line of each test case contains two space-separated integers NN and XX, as described in the problem statement.
// Output Format
// For each test case, output on a new line the total number of calories that Alice burns after jogging for NN kilometers, modulo 10^9 + 710
// 9
//  +7.

// Constraints
// 1 \leq T \leq 10^51≤T≤10
// 5

// 1 \leq N \leq 10^61≤N≤10
// 6

// 1 \leq X \leq 1001≤X≤100
// Sample 1:
// Input
// Output
// 3
// 1 2
// 2 1
// 12548 1
// 2
// 2
// 588809226
// Explanation:
// Test case 11: Alice only jogs one kilometer, which burns 22 calories since X = 2X=2.

// Test case 22: Alice jogs two kilometers. The first burns X = 1X=1 calorie, and the second also burns 11 calorie since the total amount burnt before this is 11 calorie. So, the total is 1 + 1 = 21+1=2 calories burned.

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll power(ll a, ll b)
{
    ll mul = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            mul = (mul * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return mul;
}

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll aRaisedToB = power(2, n - 1);
    ll ans = (aRaisedToB * x) % mod;

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
