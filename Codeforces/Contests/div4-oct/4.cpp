// D. Coprime
// time limit per test3 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given an array of n positive integers a1,a2,…,an (1≤ai≤1000). Find the maximum value of i+j such that ai and aj are coprime,† or −1 if no such i, j exist.

// For example consider the array [1,3,5,2,4,7,7]. The maximum value of i+j that can be obtained is 5+7, since a5=4 and a7=7 are coprime.

// † Two integers p and q are coprime if the only positive integer that is a divisor of both of them is 1 (that is, their greatest common divisor is 1).

// Input
// The input consists of multiple test cases. The first line contains an integer t (1≤t≤10) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains an integer n (2≤n≤2⋅105) — the length of the array.

// The following line contains n space-separated positive integers a1, a2,..., an (1≤ai≤1000) — the elements of the array.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, output a single integer  — the maximum value of i+j such that i and j satisfy the condition that ai and aj are coprime, or output −1 in case no i, j satisfy the condition.

// Example
// inputCopy
// 6
// 3
// 3 2 1
// 7
// 1 3 5 2 4 7 7
// 5
// 1 2 3 4 5
// 3
// 2 2 4
// 6
// 5 4 3 15 12 16
// 5
// 1 2 2 3 6
// outputCopy
// 6
// 12
// 9
// -1
// 10
// 7
// Note
// For the first test case, we can choose i=j=3, with sum of indices equal to 6, since 1 and 1 are coprime.

// For the second test case, we can choose i=7 and j=5, with sum of indices equal to 7+5=12, since 7 and 4 are coprime.



// Note that the array has at most 1000 distinct elements, since ai≤1000. For each value, store the largest index it is in. Then we can brute force all pairs of values, and find the coprime pair with largest sum of indices.

// The time complexity is O(a2ilogai+n) per testcase.

#include<bits/stdc++.h>
using namespace std;

#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<n;i++)
#define vall(v)   v.begin(),v.end()
#define vrev(v)   v.rbegin(),v.rend()
#define pb        push_back

void solve(){
	vector<vector<int>>val(1001);
	for1(i,1001){
		for1(j,1001){
			if(__gcd(i,j)==1)
				val[i].pb(j);
		}
	}
	int n;cin>>n;
	vector<vector<int>>v(1001);
	for1(i,n+1){
		int x;cin>>x;
		v[x].pb(i);
	}


	int ans=INT_MIN;

	for1(i,1001){
		for(auto j:val[i]){
			if(!v[i].empty() and !v[j].empty()){
				ans=max(ans,v[i].back()+v[j].back());
			}
		}
	}

	if(ans!=INT_MIN)cout<<ans<<"\n";
    else cout<<-1<<"\n";

}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}