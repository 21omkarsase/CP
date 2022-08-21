// A. Burenka Plays with Fractions
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Burenka came to kindergarden. This kindergarten is quite strange, so each kid there receives two fractions (ab and cd) with integer numerators and denominators. Then children are commanded to play with their fractions.

// Burenka is a clever kid, so she noticed that when she claps once, she can multiply numerator or denominator of one of her two fractions by any integer of her choice (but she can't multiply denominators by 0). Now she wants know the minimal number of claps to make her fractions equal (by value). Please help her and find the required number of claps!

// Input
// The first line contains one integer t (1≤t≤104) — the number of test cases. Then follow the descriptions of each test case.

// The only line of each test case contains four integers a, b, c and d (0≤a,c≤109, 1≤b,d≤109) — numerators and denominators of the fractions given to Burenka initially.

// Output
// For each test case print a single integer — the minimal number of claps Burenka needs to make her fractions equal.

// Example
// inputCopy
// 8
// 2 1 1 1
// 6 3 2 1
// 1 2 2 3
// 0 1 0 100
// 0 1 228 179
// 100 3 25 6
// 999999999 300000000 666666666 100000000
// 33 15 0 84
// outputCopy
// 1
// 0
// 2
// 0
// 1
// 1
// 1
// 1
// Note
// In the first case, Burenka can multiply c by 2, then the fractions will be equal.

// In the second case, fractions are already equal.

// In the third case, Burenka can multiply a by 4, then b by 3. Then the fractions will be equal (1⋅42⋅3=23).

// Note that we always can make fractions equal in two operations: Multiply first fraction's enumerator by bc, the first fraction is equal to abcb=ac, Multiply second fraction's enumerator by ad, the second fraction is equal to acdd=ac.

// That means that the answer does not exceed 2.

// If fractions are equal from input, the answer is 0. Otherwise, it can't be 0.

// Now we have to check if the answer is 1. Let's assume that for making fractions equal in 1 operation we have to multiply first fraction's enumerator by x. Then axb=cd must be true. From this we can see that x=bcad. x must be integer, so bc must be divisible by ad. If we assume that we multiplied first fraction's denumerator by x, we can do the same calculations and see that ad must be divisible by bc. So, for checking if the answer is 1 we need to check if one of ad and bc is divisible by another one. If we multiply second fraction's enumerator or denumerator by x we will get the same conditions for answer being equla to 1.

// If the answer is not 0 or 1, it's 2.

// Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve()
{
    ll a, b, c, d; 
    cin >> a >> b >> c >> d;

    ll x = a * d, y = b * c;

    if (x == y)
    {
        cout << 0 << endl;
    }
    else if ((x != 0 and (y % x == 0)) or (y != 0 and (x % y == 0)))
    {
        cout << 1 << endl;
        return;
    }
    else
        cout << 2 << endl;
    
    // vi a(5);
    // for(int i =0;i<4;i++)a[i]=98;
    // for(int i =0;i<5;i++)cout<<a[i]<<" ";
    // cout<<endl;
        
        
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}