// Problem
// For an array AA of length NN, let F(A)F(A) denote the sum of the product of all the subarrays of AA. Formally,

// F(A) = \sum_{L=1}^N \sum_{R=L}^N \left (\prod_{i=L}^R A_i\right )
// F(A)=
// L=1
// ∑
// N
// ​

// R=L
// ∑
// N
// ​
//  (
// i=L
// ∏
// R
// ​
//  A
// i
// ​
//  )
// For example, let A = [1, 0, 1]A=[1,0,1], then there are 66 possible subarrays:

// Subarray [1, 1][1,1] has product = 1=1
// Subarray [1, 2][1,2] has product = 0=0
// Subarray [1, 3][1,3] has product = 0=0
// Subarray [2, 2][2,2] has product = 0=0
// Subarray [2, 3][2,3] has product = 0=0
// Subarray [3, 3][3,3] has product = 1=1
// So F(A) = 1+1 = 2F(A)=1+1=2.

// Given a binary array AA, determine the value of F(A)F(A).

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer NN denoting the length of the array.
// The second line contains NN space-separated integers denoting the array AA.
// Output Format
// For each test case, output on a new line the value of F(A)F(A).

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 1 \leq N \leq 10^51≤N≤10
// 5

// 0 \leq A_i \leq 10≤A
// i
// ​
//  ≤1
// The sum of NN over all test cases won't exceed 2 \cdot 10^52⋅10
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 3
// 1 0 1
// 1
// 0
// 2
// 1 1
// 4
// 1 1 0 1
// 2
// 0
// 3
// 4
// Explanation:
// Test case 11: Explained in the statement.

// Test case 22: There is only 11 subarray and it has product = 0=0.

// Test case 33: All the 33 subarrays have product = 1=1.

// Practice Special Block
// Date Added20-07-2022
// Time limit1 secs
// Source Limit50000 Bytes

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    bool allOnes = true, allZeros = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ones++;
        }
        else
        {
            ans = ans + (ones * (ones + 1)) / 2;
            ones = 0;
        }
    }
    if (ones > 0)
    {
        ans = ans + (ones * (ones + 1)) / 2;
    }
    cout << ans << endl;
    // }
}

int main()
{
    // int t;
    // cin >> t;

    // while (t--)
    // {
    solve();
    // }
    return 0;
}