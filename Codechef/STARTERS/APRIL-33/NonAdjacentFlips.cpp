// You are given a binary string S of length N. You can perform the following operation on S:

// Pick any set of indices such that no two picked indices are adjacent.
// Flip the values at the picked indices (i.e. change 0 to 1 and 1 to 0).
// For example, consider the string S=1101101.
// If we pick the indices {1,3,6}, then after flipping the values at picked indices, we will get 1–10–110–1→0111111.
// Note that we cannot pick the set {2,3,5} since 2 and 3 are adjacent indices.

// Find the minimum number of operations required to convert all the characters of S to 0.

// Input Format
// The first line contains a single integer T - the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer N - the length of the binary string S.
// The second line of each test case contains a binary string S of length N.
// Output Format
// For each test case, output the minimum number of operations required to convert all the characters of S to 0.

// Constraints
// 1≤T≤100
// 1≤N≤100
// Sample Input 1
// 3
// 6
// 101001
// 5
// 00000
// 3
// 111
// Sample Output 1
// 1
// 0
// 2
// Explanation
// Test Case 1: Pick the set of indices {1,3,6}. On flipping the values at these indices, the string becomes 000000.

// Test Case 2: The string already has all characters equal to 0.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;
        if (s[0] == '1')
        {
            ans = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' and s[i - 1] == '1')
            {
                ans = 2;
                break;
            }
            else if (s[i] == '1')
            {
                ans = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
