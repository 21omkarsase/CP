// Problem
// Chef is very hungry. So, Chef goes to a shop selling burgers. The shop has 22 types of burgers:

// Normal burgers, which cost XX rupees each
// Premium burgers, which cost YY rupees each (where Y \gt XY>X)
// Chef has RR rupees. Chef wants to buy exactly NN burgers. He also wants to maximize the number of premium burgers he buys. Determine the number of burgers of both types Chef must buy.

// Output -1−1 if it is not possible for Chef to buy NN burgers.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains four space-separated integers XX, YY, NN and RR — the cost of a normal burger, the cost of a premium burger, the number of burgers Chef wants to buy and the amount of money Chef has.
// Output Format
// For each test case, output on a new line two integers: the number of normal burgers and the number of premium burgers Chef must buy satisfying the given conditions.

// Output -1−1 if he cannot buy NN burgers.

// Constraints
// 1 \leq T \leq 10^41≤T≤10
// 4

// 1 \le X \lt Y \le 10001≤X<Y≤1000
// 1 \le N \le 10^61≤N≤10
// 6

// 1 \le R \le 10^91≤R≤10
// 9

// Sample 1:
// Input
// Output
// 4
// 2 10 4 12
// 4 8 10 50
// 99 100 5 10
// 9 10 10 200
// 4 0
// 8 2
// -1
// 0 10
// Explanation:
// Test case 11: Chef has to buy 44 normal burgers only. Even if he buys 11 premium burger, he would not be able to buy 44 burgers.

// Test case 22: Chef can buy 88 normal burgers and 22 premium burgers.

// Test case 33: It is not possible for Chef to buy 55 burgers.

// Practice Special Block
// Date Added22-07-2022
// Time limit0.5 secs
// Source Limit50000 Bytes

#include <iostream>
using namespace std;

void solve()
{
    int x, y, n, r;
    cin >> x >> y >> n >> r;

    if ((x * n) > r)
    {
        cout << -1 << endl;
    }
    else if ((y * n) <= r)
    {
        cout << 0 << " " << n << endl;
    }
    else if (((x * (n - 1)) + y) > r)
    {
        cout << n << " " << 0 << endl;
    }
    else
    {
        int premCount = (r - n * x) / (y - x);
        cout << n - premCount << " " << premCount << endl;
    }
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
