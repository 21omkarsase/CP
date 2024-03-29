// Problem
//     You are given an integer NN.

//     Find a permutation P = [ P_1, P_2, \ldots, P_N ] P = [ P 1
// ​ , P 2
// ​ ,…, P N
// ​ ] of the integers \{1, 2, \ldots, N\} {1, 2,…, N} such that sum of averages of all consecutive triplets is minimized,
//                        i.e.

// \sum_{i = 1} ^ { N - 2 } \frac{P_i + P_{i + 1} + P_{i + 2}} {3} i = 1
// ∑ N−2
// ​

//                                                                      3 P
//                                                                          i
// ​ + P i + 1
// ​ + P i + 2
// ​

// ​

//                                                                      is minimized.

//                                                                      If multiple permutations are possible,
//                        print any of them.

//                        Input Format
//                            The first line of input will contain a single integer TT,
//                        denoting the number of test cases.The first and only line of each test case contains an integer N, the size of the permutation.Output Format For each test case, output on a new line a permutation which satisfies the above conditions.

//                                                                                                                                                                                             Constraints 1 \leq T \leq 10001≤T≤1000 3 \leq N \leq 10 ^
//                                                                                                                                                                                             53≤N≤10 5

//                                                                                                                                                                                                 The sum of NN over all test cases won't exceed 3\cdot 10^53⋅10  5.Sample 1 : Input Output 2 4 3 3 2 1 4 3 2 1 Explanation : Test case 11 : The sum is \frac{P_1 + P_2 + P_3} {3} + \frac{P_2 + P_3 + P_4} {3} = \frac{3 + 2 + 1} {3} + \frac{2 + 1 + 4} {3} = 6 / 3 + 7 / 3 = 4.333\ldots 3 P 1
// ​ + P 2
// ​ + P 3
// ​

// ​ + 3 P 2
// ​ + P 3
// ​ + P 4
// ​

// ​ = 3 3 + 2 + 1
// ​ + 3 2 + 1 + 4
// ​ = 6 / 3 + 7 / 3 = 4.333… Among all possible permutations of \{1, 2, 3, 4\} {1, 2, 3, 4},
//                        this is one of the permutations which provides the minimum result.

//                        Test case 22 : The sum is \frac{3 + 2 + 1} {3} = 6 / 3 = 2 3 3 + 2 + 1
// ​ = 6 / 3 = 2. Every permutation of size 33 will have this value,
//                        hence it is the minimum possible.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 3)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
        return;
    }

    int first = n, last = n - 1, second = n - 2, second_last = n - 3;
    cout << first << " " << second << " ";

    for (int i = 1; i <= n - 4; i++)
        cout << i << " ";
    cout << second_last << " " << last << endl;
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
