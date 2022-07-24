// Problem
// You are given an unsorted permutation PP of size NN. An operation is defined as:

// Swap P_iP
// i
// ​
//   and P_{i+K}P
// i+K
// ​
//   for any ii in the range [1,N-K][1,N−K].
// Find the maximum value of KK, such that, the permutation PP can be sorted by applying any finite number of operations.

// Note that, a permutation of size NN contains all integers from 11 to NN exactly once.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains an integer NN, the size of permutation.
// The next line contains NN integers describing the permutation PP.
// It is guaranteed that the given permutation is not sorted.
// Output Format
// For each test case, output on a new line the maximum possible value of KK.

// Constraints
// 1 \leq T \leq 10^51≤T≤10
// 5

// 2 \leq N \leq 10^52≤N≤10
// 5

// Sum of NN over all test cases does not exceed 10^510
// 5
//  .
// Sample 1:
// Input
// Output
// 3
// 4
// 4 2 3 1
// 5
// 1 4 3 2 5
// 2
// 2 1
// 3
// 2
// 1
// Explanation:
// Test Case 11: Permutation can be sorted by swapping P_1P
// 1
// ​
//   and P_4P
// 4
// ​
//  . So, the maximum possible value of KK is 33. It can be shown that we cannot sort the permutation for any K\gt 3K>3.

// Test Case 22: Swapping P_2P
// 2
// ​
//   and P_4P
// 4
// ​
//   will sort the permutation. So, the maximum possible value of KK is 22. It can be shown that we cannot sort the permutation for any K\gt 2K>2.

// Test Case 33: Swapping P_1P
// 1
// ​
//   and P_2P
// 2
// ​
//   will sort the permutation. So, the maximum possible value of KK is 11. It can be shown that we cannot sort the permutation for any K\gt 1K>1.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ans = 0, dif, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;
        dif = abs(i - p);
        if (ans == -1 and dif > 0)
        {
            ans = dif;
        }
        else if (dif > 0)
        {
            ans = __gcd(ans, dif);
        }
    }
    cout << ans << endl;
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

// ******************wrong************************

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n;
//     cin>>n;

//     unordered_map<int,int>m;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         m[a[i]]=i;
//     }
//     int maxDiff=0;
//     for(int i=0;i<n;i++){
//         if(a[i]!=i+1){
//             int idx=m[i+1];
//             int decider=n-idx;
//             if(i>=0 and i<decider){
//                 maxDiff=max(maxDiff,(idx-i));
//             }
//         }
//     }
//     cout<<maxDiff<<endl;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;

// 	while(t--){
// 	    solve();
// 	}
// 	return 0;
// }
