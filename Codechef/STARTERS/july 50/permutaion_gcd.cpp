// Problem
// Chef is interested in the sum of GCDs of all prefixes of a permutation of the integers \{1, 2, \ldots, N\}{1,2,…,N}.

// Formally, for a permutation P = [P_1, P_2, \ldots, P_N]P=[P
// 1
// ​
//  ,P
// 2
// ​
//  ,…,P
// N
// ​
//  ] of \{1, 2, \ldots, N\}{1,2,…,N}, let us define a function F_i = \gcd(A_1, A_2, A_3, \ldots, A_i)F
// i
// ​
//  =gcd(A
// 1
// ​
//  ,A
// 2
// ​
//  ,A
// 3
// ​
//  ,…,A
// i
// ​
//  ). Chef is interested in the value of F_1 + F_2 + \ldots + F_NF
// 1
// ​
//  +F
// 2
// ​
//  +…+F
// N
// ​
//  .

// Now, Chef wants to find a permutation of \{1, 2, \ldots, N\}{1,2,…,N} which has the given sum equal to XX. Please help Chef find one such permutation. In case there is no such permutation, print -1−1. In case of multiple answers, any of them will be accepted.

// A permutation of \{1, 2, \ldots, N\}{1,2,…,N} is a sequence of numbers from 11 to NN in which each number occurs exactly once.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line containing two space separated integers NN and XX denoting the length of required permutation and the required sum of GCDs of all prefixes respectively.
// Output Format
// If there is a valid permutation that satisfies the required condition, then:
// In a single line, output NN space-separated integers denoting the required permutation permutation.
// If there is no permutation, print -1−1 in a single line.
// Constraints
// 1 \leq T \leq 10^41≤T≤10
// 4

// 1 \leq N \leq 10001≤N≤1000
// 1 \leq X \leq 2\cdot N - 11≤X≤2⋅N−1
// The sum of NN over all test cases won't exceed 3\cdot 10^53⋅10
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 1 1
// 2 1
// 4 6
// 3 5
// 1
// -1
// 2 4 3 1
// 3 2 1
// Explanation:
// Test case 11: The only possible permutation has a sum of 11, as required.

// Test case 22: The two permutations of length 22 are:

// [1, 2][1,2] with a value of 1 + 1 = 21+1=2
// [2, 1][2,1] with a value of 2 + 1 = 32+1=3
// None of them have a sum of X = 1X=1, so we output -1−1.

// Test case 33: For P = [2, 4, 3, 1]P=[2,4,3,1], we have:

// F_1 = 2F
// 1
// ​
//  =2
// F_2 = \gcd(2, 4) = 2F
// 2
// ​
//  =gcd(2,4)=2
// F_3 = \gcd(2, 4, 3) = 1F
// 3
// ​
//  =gcd(2,4,3)=1
// F_4 = \gcd(2, 4, 3, 1) = 1F
// 4
// ​
//  =gcd(2,4,3,1)=1
// The sum of these values is 66, as required.

#include <bits/stdc++.h>
using namespace std;

int calculateGCD(int arr[], int n)
{
    int ans = arr[0], GCD = arr[0];
    for (int i = 1; i < n; i++)
    {
        GCD = __gcd(GCD, arr[i]);
        ans += GCD;
    }
    return ans;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = i + 1;

    int s = 0, e = n - 1;
    bool flag = false;
    if (x < n)
        cout << -1 << endl;
    else if (x >= n)
    {
        int key = x - n;
        reverse(a, a + key);
        reverse(a + key, a + n);
        reverse(a, a + n);

        if (calculateGCD(a, n) == x)
        {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
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

// ****************************another solution**********************
// when x<=2*(n-1)

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, x;
//     cin >> n >> x;

//     if (x < n)
//         cout << -1 << endl;
//     else
//     {
//         int final = x - n + 1;
//         cout << final << " ";

//         for (int i = 1; i <= n; i++)
//         {
//             if (i != final)
//                 cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
