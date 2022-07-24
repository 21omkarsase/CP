// Problem
// Chef has an array AA of length NN.

// Let f(i)f(i) denote the sum A_1 + A_2 + \dots + A_i \,A
// 1
// ​
//  +A
// 2
// ​
//  +⋯+A
// i
// ​
//   and let g(i)g(i) denote the sum A_i + A_{i + 1} + \dots + A_NA
// i
// ​
//  +A
// i+1
// ​
//  +⋯+A
// N
// ​
//  .

// Chef creates another array BB of length NN such that B_i = f(i) + g(i)B
// i
// ​
//  =f(i)+g(i) for all 1 \leq i \leq N1≤i≤N.

// Now, Chef has lost the original array AA and needs your help to recover it, given array BB. It is guaranteed that Chef has obtained the array BB from a valid array AA.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer NN — the size of the array AA.
// The second line of each test case contains NN space-separated integers B_1, B_2, \dots, B_NB
// 1
// ​
//  ,B
// 2
// ​
//  ,…,B
// N
// ​
//   denoting the array BB.
// Output Format
// For each testcase, output NN space separated integers A_1, A_2, \dots, A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//   denoting the array AA.

// Note that 1 \leq A_i \leq 10^51≤A
// i
// ​
//  ≤10
// 5
//   must hold for all 1 \leq i \leq N1≤i≤N and it is guaranteed that a valid array AA that meets these constraints exists.

// If there are multiple answers, output any.

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 1 \leq N \leq 10^51≤N≤10
// 5

// 1 \leq B_i \leq 2 \cdot 10^{10}1≤B
// i
// ​
//  ≤2⋅10
// 10

// Th sum of NN over all test cases does not exceed 10^510
// 5
//  .
// 1 \leq A_i \leq 10^51≤A
// i
// ​
//  ≤10
// 5

// It is guaranteed that a valid array AA always exists.
// Sample 1:
// Input
// Output
// 4
// 1
// 6
// 3
// 7 8 9
// 4
// 13 15 13 14
// 2
// 25 20
// 3
// 1 2 3
// 2 4 2 3
// 10 5

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long b[n], a[n];
    long long bSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        bSum += b[i];
    }

    long long aSum = bSum / (n + 1);

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i] - aSum;
        cout << a[i] << " ";
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
        cout << endl;
    }
    return 0;
}
