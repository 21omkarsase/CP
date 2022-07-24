// Problem
// NN boys and NN girls attend a dance class, where NN is odd. For today's practice session, they need to form NN boy-girl pairs.

// The ii-th boy has a happiness value of A_iA
// i
// ​
//   and the ii-th girl has a happiness value of B_iB
// i
// ​
//  . A pair consisting of the ii-th boy and the jj-th girl has a happiness value of A_i + B_jA
// i
// ​
//  +B
// j
// ​
//  .

// Let the happiness values of the NN pairs be C_1, C_2, \ldots, C_NC
// 1
// ​
//  ,C
// 2
// ​
//  ,…,C
// N
// ​
//  . The dance instructor would like it if many of the pairs have a high happiness value, and passes the task to you — find the maximum possible value of the median of CC, if the boy-girl pairs are chosen optimally.

// Note: The median of a odd-sized list of integers is the middle number when they are sorted. For example, the median of [1][1] is 11, the median of [1, 5, 2][1,5,2] is 22, and the median of [30, 5, 5, 56, 3][30,5,5,56,3] is 55.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of three lines of input.
// The first line of each test case contains a single integer NN.
// The second line of each test case contains NN space-separated integers A_1, A_2, \ldots, A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//   — the happiness values of the boys.
// The third line of each test case contains NN space-separated integers B_1, B_2, \ldots, B_NB
// 1
// ​
//  ,B
// 2
// ​
//  ,…,B
// N
// ​
//   — the happiness values of the girls.
// Output Format
// For each test case, output on a new line the maximum possible median happiness of the NN pairs.

// Constraints
// 1 \leq T \leq 3 \cdot 10^41≤T≤3⋅10
// 4

// 1 \leq N \lt 3\cdot 10^51≤N<3⋅10
// 5

// NN is odd
// 1 \leq A_i, B_i \leq 10^91≤A
// i
// ​
//  ,B
// i
// ​
//  ≤10
// 9
//   for each valid ii
// The sum of NN across all test cases won't exceed 3 \cdot 10^53⋅10
// 5
//  .
// Subtasks
// Subtask 1 (10 points):
// The sum of NN across all test cases won't exceed 1010.
// Subtask 2 (30 points):
// The sum of NN across all test cases won't exceed 40004000.
// Subtask 3 (60 points):
// No further constraints.
// Sample 1:
// Input
// Output
// 3
// 1
// 10
// 25
// 3
// 1 6 6
// 2 2 7
// 5
// 10 4 93 5 16
// 4 34 62 6 26
// 35
// 8
// 50
// Explanation:
// Test case 11: There is only one boy and one girl, so they must be paired with each other. The happiness value of the pair is 10 + 25 = 3510+25=35, and it is also the median.

// Test case 22: Pair A_1A
// 1
// ​
//   with B_3B
// 3
// ​
//  , A_2A
// 2
// ​
//   with B_2B
// 2
// ​
//  , and A_3A
// 3
// ​
//   with B_3B
// 3
// ​
//  . The happiness values are then [1+7, 2+6, 2+6] = [8, 8, 8][1+7,2+6,2+6]=[8,8,8], with a median of 88. It can be shown that this is the maximum possible median.

// Test case 33: One way of achieving a median of 5050 is as follows:

// Pair A_1A
// 1
// ​
//   with B_3B
// 3
// ​
//  , for a happiness of 10 + 62 = 7210+62=72
// Pair A_2A
// 2
// ​
//   with B_4B
// 4
// ​
//  , for a happiness of 4 + 6 = 104+6=10
// Pair A_3A
// 3
// ​
//   with B_5B
// 5
// ​
//  , for a happiness of 93 + 26 = 11993+26=119
// Pair A_4A
// 4
// ​
//   with B_1B
// 1
// ​
//  , for a happiness of 5 + 4 = 95+4=9
// Pair A_5A
// 5
// ​
//   with B_2B
// 2
// ​
//  , for a happiness of 16 + 34 = 5016+34=50
// The happiness values are [72, 10, 119, 9, 50][72,10,119,9,50], with a median of 5050. It can be shown that no other pairing obtains a strictly larger median.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n, greater<int>());
    int median = INT_MAX;
    for (int i = (n - 1) / 2, j = 0; i < n, j <= (n - 1) / 2; i++, j++)
    {
        median = min(median, a[i] + b[j]);
    }

    cout << median << endl;
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
