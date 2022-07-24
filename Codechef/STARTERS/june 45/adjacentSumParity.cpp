
// Problem
// Chef has an array AA of length NN.

// Chef forms a binary array BB of length NN using the parity of the sums of adjacent elements in AA. Formally,

// B_i = (A_i + A_{i+1}) \, \% \, 2B
// i
// ​
//  =(A
// i
// ​
//  +A
// i+1
// ​
//  )%2 for 1 \leq i \le N - 11≤i≤N−1
// B_N = (A_N + A_1) \, \% \, 2B
// N
// ​
//  =(A
// N
// ​
//  +A
// 1
// ​
//  )%2
// Here x \, \% \, yx%y denotes the remainder obtained when xx is divided by yy.

// Chef lost the array AA and needs your help. Given array BB, determine whether there exits any valid array AA which could have formed BB.

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
// For each testcase, output YES if there exists a valid array AA, NO otherwise.

// You can print any character in any case. For example YES, Yes, yEs are all considered same.

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 2 \leq N \leq 10^52≤N≤10
// 5

// B_i \in \{0, 1\}B
// i
// ​
//  ∈{0,1}
// The sum of NN over all test cases do not exceed 3 \cdot 10^53⋅10
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 2
// 0 0
// 2
// 1 0
// 4
// 1 0 1 0
// 3
// 1 0 0
// YES
// NO
// YES
// NO

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += b[i];
        }
        if (s % 2 == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}