// A permutation P of length N (1-based) is called good if it satisfies the following these conditions:

// For each 1≤i≤N, Pi≠i
// |P1−1|⊕|P2−2|⊕…⊕|PN−N|=0
// Here, ⊕ denotes the bitwise XOR operation and |X| denotes the absolute value of X.

// Find any good permutation P of length N or print −1 if no such permutation exists.

// Note: A permutation of length N is an array which contains every integer from 1 to N (inclusive) exactly once.

// Input Format
// The first line contains a single integer T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains an integer N - the length of the permutation P.
// Output Format
// For each test case, print −1 if no such permutation exists. Otherwise, in a single line, output N space-separated integers - the required good permutation. If more than one solution exists, you may print any of them.

// Constraints
// 1≤T≤106
// 1≤N≤106
// Sum of N over all test cases does not exceed 106
// Sample Input 1
// 3
// 1
// 2
// 8
// Sample Output 1
// -1
// 2 1
// 7 1 5 6 3 4 8 2
// Explanation
// Test case 1: There is only one permutation P=[1] of length 1. Since P1=1 the answer does not exist.

// Test case 2: Consider the permutation P=[2,1]. Both conditions are satisfied.

// P1≠1 and P2≠2
// |P1−1|⊕|P2−2|=|2−1|⊕|1−2|=1⊕1=0

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n, 0);
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            swap(p[i], p[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    else
    {
        if (n < 5)
        {
            cout << -1 << endl;
        }
        else
        {
            p[0] = 4;
            p[1] = 3;
            p[2] = 5;
            p[3] = 1;
            p[4] = 2;

            for (int i = 5; i < n; i += 2)
            {
                swap(p[i], p[i + 1]);
            }
            for (int i = 0; i < n; i++)
            {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
