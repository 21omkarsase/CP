// You are given an array AA containing NN integers. Find if it is possible to choose exactly MM elements from the array such that the MEX of the chosen elements is exactly KK.

// Recall that the MEX of an array is the smallest non-negative integer that does not belong to the array. For example, the MEX of [2, 2, 1][2,2,1] is 00 because 00 does not belong to the array, the MEX of [3, 1, 0, 1][3,1,0,1] is 22 because 00 and 11 belong to the array, but 22 does not.

// Input Format
// The first line contains an integer TT, denoting the number of test cases. The TT test cases then follow:
// The first line of each test case contains an integer N, M, KN,M,K, denoting the length of the array, the number of elements to be chosen, and the required MEX respectively.
// The second line of each test case contains NN space-separated integers A_1,A_2,\ldots,A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//  , denoting the elements of the array.
// Output Format
// For each test case, print YES if it is possible to choose MM elements from the array AA so that the MEX of the chosen elements is exactly KK and NO otherwise.

// You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes and YES will all be treated as identical).

// Constraints
// 1 \leq T \leq 1001≤T≤100
// 1 \leq N \leq 1001≤N≤100
// 1 \leq M \leq N1≤M≤N
// 0 \leq A_i, K \leq N0≤A
// i
// ​
//  ,K≤N
// Sample 1:
// Input
// Output
// 6
// 5 4 2
// 0 1 3 0 3
// 2 1 2
// 0 1
// 3 3 3
// 0 1 2
// 4 3 3
// 2 0 4 3
// 5 4 2
// 0 2 1 2 5
// 6 5 2
// 0 1 0 2 0 3
// YES
// NO
// YES
// NO
// NO
// YES
// Explanation:
// Test case 11: The chosen elements are 0, 1, 3, 00,1,3,0 and MEX([0, 1, 3, 0]) = 2MEX([0,1,3,0])=2.

// Test case 33: The chosen elements are 0, 1, 20,1,2 and MEX([0, 1, 2]) = 3MEX([0,1,2])=3.

// Test case 66: The chosen elements are 0, 1, 0, 0, 30,1,0,0,3 and MEX([0, 1, 0, 0, 3]) = 2MEX([0,1,0,0,3])=2.

// Test case 2, 4, 52,4,5: There is no way to choose elements to obtain the required MEX.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int a[n];
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]] += 1;
    }

    int mex = 0;
    for (int i = 0; i < k; i++)
    {
        if (freq[i])
        {
            mex++;
        }
        else
        {
            break;
        }
    }

    int available = n - freq[k];
    if (available >= m and k <= m and mex == k)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
