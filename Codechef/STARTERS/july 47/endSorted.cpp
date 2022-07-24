
// Problem
// Chef considers a permutation PP of \{1, 2, 3, \dots, N\}{1,2,3,…,N} End Sorted if and only if P_1 = 1P
// 1
// ​
//  =1 and P_N = NP
// N
// ​
//  =N.

// Chef is given a permutation PP.

// In one operation Chef can choose any index i \ (1 \leq i \leq N-1)i (1≤i≤N−1) and swap P_iP
// i
// ​
//   and P_{i+1}P
// i+1
// ​
//  . Determine the minimum number of operations required by Chef to make the permutation PP End Sorted.

// Note: An array PP is said to be a permutation of \{1, 2, 3, \dots, N\}{1,2,3,…,N} if PP contains each element of \{1, 2, 3, \dots, N\}{1,2,3,…,N} exactly once.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer NN, denoting the length of the permutation PP.
// The second line contains NN space-separated integers P_1, P_2, P_3, \ldots, P_NP
// 1
// ​
//  ,P
// 2
// ​
//  ,P
// 3
// ​
//  ,…,P
// N
// ​
//  , denoting the permutation PP.
// Output Format
// For each test case, output minimum number of operations required by Chef to make the permutation PP End Sorted.

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 2 \leq N \leq 10^52≤N≤10
// 5

// PP is a permutation of \{1, 2, 3, \dots N\}{1,2,3,…N}
// The sum of NN over all test cases does not exceed 3 \cdot 10^53⋅10
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 4
// 1 3 2 4
// 3
// 3 2 1
// 2
// 2 1
// 3
// 2 1 3
// 0
// 3
// 1
// 1
// Explanation:
// Test case 11: PP is already End Sorted.

// Test case 22: PP can be made End Sorted using 33 operations as follows: [3, 2, 1] \to [\textcolor{red}{2, 3}, 1] \to [2, \textcolor{red}{1, 3}] \to [\textcolor{red}{1, 2}, 3][3,2,1]→[2,3,1]→[2,1,3]→[1,2,3]. It can be shown that achieving this in fewer than 33 moves is impossible.

// Test case 33: PP can be made End Sorted using one operation, by swapping 11 and 22.

// Test case 44: PP can be made End Sorted using one operation, by swapping 11 and 22.

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

        int start, end;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                start = i;
                // cout<<start<<" =start i= "<<i<<endl;
            }
            if (a[i] == n)
            {
                end = i;
                // cout<<start<<" =end i= "<<i<<endl;
            }
        }
        // cout<<start<<" start end "<<end<<endl;

        if (start == 0 and end == n - 1)
        {
            // cout<<start<<" se "<<end<<" "<<0<<endl;
            cout << 0 << endl;
        }
        else
        {
            int ans1 = 0, ans2 = 0, finalAns = 0;
            int temp = end;
            if (start > end)
            {
                ans1 = start;
                temp += 1;
                ans2 = (n - 1) - temp;
                //   cout<<"if "<<ans1<<" "<<ans2<<endl;
            }
            else
            {
                ans1 = start;
                ans2 = (n - 1) - temp;
                // cout<<"else "<<ans1<<" "<<ans2<<endl;
            }
            finalAns = ans1 + ans2;
            // cout<<"last "<<finalAns<<endl;
            cout << finalAns << endl;
        }
    }
    return 0;
}
