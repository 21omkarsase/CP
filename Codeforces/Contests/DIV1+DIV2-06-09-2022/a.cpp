// A. Mainak and Array
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Mainak has an array a1,a2,…,an of n positive integers. He will do the following operation to this array exactly once:

// Pick a subsegment of this array and cyclically rotate it by any amount.
// Formally, he can do the following exactly once:
// Pick two integers l and r, such that 1≤l≤r≤n, and any positive integer k.
// Repeat this k times: set al=al+1,al+1=al+2,…,ar−1=ar,ar=al (all changes happen at the same time).
// Mainak wants to maximize the value of (an−a1) after exactly one such operation. Determine the maximum value of (an−a1) that he can obtain.

// Input
// Each test contains multiple test cases. The first line contains a single integer t (1≤t≤50) — the number of test cases. Description of the test cases follows.

// The first line of each test case contains a single integer n (1≤n≤2000).

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤999).

// It is guaranteed that the sum of n over all test cases does not exceed 2000.

// Output
// For each test case, output a single integer — the maximum value of (an−a1) that Mainak can obtain by doing the operation exactly once.

// Example
// inputCopy
// 5
// 6
// 1 3 9 11 5 7
// 1
// 20
// 3
// 9 99 999
// 4
// 2 1 8 1
// 3
// 2 1 5
// outputCopy
// 10
// 0
// 990
// 7
// 4
// Note
// In the first test case, we can rotate the subarray from index 3 to index 6 by an amount of 2 (i.e. choose l=3, r=6 and k=2) to get the optimal array:
// [1,3,9,11,5,7–––––––––]⟶[1,3,5,7,9,11–––––––––]
// So the answer is an−a1=11−1=10.
// In the second testcase, it is optimal to rotate the subarray starting and ending at index 1 and rotating it by an amount of 2.
// In the fourth testcase, it is optimal to rotate the subarray starting from index 1 to index 4 and rotating it by an amount of 3. So the answer is 8−1=7.


#include<bits/stdc++.h>
using namespace std;

void solve(){
	int ans=INT_MIN;
	int n;cin>>n;
	vector<int>a(n,0);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		ans=max(ans,(a[i]-a[0]));
		ans=max(ans,(a[n-1]-a[i]));
		if(i<=n-2)ans=max(ans,(a[i]-a[i+1]));
	}
	
	cout<<ans<<endl;
}

int main(){

    int t;cin>>t;
    while(t--)
    	solve();
	return 0;
}