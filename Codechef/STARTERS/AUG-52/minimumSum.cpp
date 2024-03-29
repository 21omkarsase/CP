// Problem
// You are given an array A_1, A_2, \dots, A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//   of length NN. You can perform the following operation any number of times (possibly 0 times) :

// Choose any two indices ii and jj and replace either A_iA
// i
// ​
//   or A_jA
// j
// ​
//   with \gcd(A_i,A_j)gcd(A
// i
// ​
//  ,A
// j
// ​
//  ).
// Find the minimum possible sum (ie. A_1 + A_2 + \dots + A_NA
// 1
// ​
//  +A
// 2
// ​
//  +⋯+A
// N
// ​
//  ) that you can achieve, and output that.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first line of each test case contains an integer NN - the length of the array AA.
// The second line of each test case contains NN space-separated integers A_1,A_2,\ldots,A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//  .​
// Output Format
// For each test case, output on a new line the minimum sum of the array that can be achieved.

// Constraints
// 1 \leq T \leq 1001≤T≤100
// 2 \leq N \leq 10^52≤N≤10
// 5

// 1 \leq A_i \leq 10^91≤A
// i
// ​
//  ≤10
// 9

// The sum of NN over all test cases won't exceed 3 * 10^53∗10
// 5
//  .
// Subtasks
// Subtask 1 (10 points): 1 \leq M \leq 101≤M≤10
// Subtask 2 (20 points): The sum of NN across all test cases won't exceed 2020.
// Subtask 3 (70 points): No further constraints.
// Sample 1:
// Input
// Output
// 2
// 2
// 5 10
// 3
// 2 2 6
// 10
// 6
// Explanation:
// Test case 11: Choose i=1,j=2i=1,j=2 and replace A_2A
// 2
// ​
//   with \gcd(5,10)=5gcd(5,10)=5.

// Test case 22: Choose i=1,j=3i=1,j=3 and replace A_3A
// 3
// ​
//   with \gcd(2,6)=2gcd(2,6)=2.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long gcd;
    cin >> gcd;
    for (int i = 2; i <= n; i++)
    {
        long long a;
        cin >> a;
        gcd = __gcd(gcd, a);
    }

    // for every ele -> minimum value will be gcd of all ele present

    // taking min and checking for modulo will not give correct ans every time  if(a[i]%minNo!=0){
    cout << (gcd * n) << endl;

    // TIME COMPLEXITY : O(N+Log M)
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}