// An array is said to be good if all the elements of the array have the same parity. For example, the arrays [2,8] and [9,1,3] are good while the array [4,5,6] is not good.
//
// Given an array A of size N. You can perform the following operation on the array:
//
// Choose indices i and j (1≤i,j≤|A|,i≠j).
// Append Ai+Aj to the array A.
// Remove the ith and jth elements from the array A.
// Find the minimum number of operations required to make the array good.
//
// It is guaranteed that the array can be converted to a good array using a finite number of operations.
//
// Input Format
// The first line contains a single integer T - number of test cases.
// The first line of each test case contains a single integer N - the size of the array.
// The second line of each test case contains N space-separated integers A1, A2, …, AN.
// Output Format
// For each test case, print a single integer denoting the minimum number of operations required to make the array good.
//
// Constraints
// 1≤T≤104
// 1≤N≤2⋅105
// 0≤ Ai≤ 105
// Sum of N over all test cases does not exceed 2⋅105.
// Sample Input 1
// 2
// 4
// 1 2 3 4
// 5
// 1 1 1 1 1
// Sample Output 1
// 1
// 0
// Explanation
// Test case 1: In one operation, choose i=1 and j=3. Thus, we remove the elements 1 and 3 from the array and append 1+3=4 to the array.
// The updated array is [2,4,4]. All elements of the updated array are even. Thus, the array is good.
//
// Test case 2: All elements of the array are 1, which is odd. Thus, the array is already good.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int even = 0, odd = 0;
    for (auto it : v)
    {
        if (it & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    int ans;
    if (odd & 1)
    {
        ans = even;
    }
    else
    {
        ans = min(even, odd / 2);
    }
    cout << ans << endl;

    return 0;
}
