// Problem
// You are given an array AA of NN positive integers. Let GG be the gcd of all the numbers in the array AA.

// You have to find if there exist KK non-empty, non-intersecting subarrays of AA for which the arithmetic mean of the gcd of those KK subarrays equals GG.

// Formally, let g_1, g_2, \ldots, g_Kg 
// 1
// ​
//  ,g 
// 2
// ​
//  ,…,g 
// K
// ​
//   be the gcd of those KK chosen subarrays, then, \frac{(g_1 + g_2 + .... + g_K)}{K} = G 
// K
// (g 
// 1
// ​
//  +g 
// 2
// ​
//  +....+g 
// K
// ​
//  )
// ​
//  =G should follow.

// If there exist KK such subarrays, output YES, otherwise output NO.

// Note: Two subarrays are non-intersecting if there exists no index ii, such that, A_iA 
// i
// ​
//   is present in both the subarrays.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains two space-separated integers — the number of integers in the array AA and the integer KK, respectively.
// The next line contains NN space-separated positive integers A_1, A_2, \ldots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  , the elements of the array AA.
// Output Format
// For each test case, if there exist KK such subarrays, output YES, otherwise output NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 1 \leq N \leq 2 \cdot {10}^51≤N≤2⋅10 
// 5
 
// 1 \leq K \leq N1≤K≤N
// 1 \leq A_i \leq 2 \cdot {10}^51≤A 
// i
// ​
//  ≤2⋅10 
// 5
 
// The sum of NN over all test cases won't exceed 4 \cdot {10}^54⋅10 
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 6 4
// 2 2 3 3 2 2
// 1 1
// 1
// 5 3
// 1 2 3 4 5
// 4 3
// 6 12 18 24
// NO
// YES
// YES
// NO
// Explanation:
// Test case 11: It is impossible to find 44 non-empty, non-intersecting subarrays which satisfy the given condition.

// Test case 22: There is only one element in the array. Here, G = 1G=1 and, for the subarray [1][1], g = 1g=1. Thus, it is possible to satisfy the conditions.

// Test case 33: Here, G = gcd(1,2,3,4,5) = 1G=gcd(1,2,3,4,5)=1. We can choose 33 non-empty, non-intersecting subarrays \{[1], [2,3], [4,5]\}{[1],[2,3],[4,5]} where gcd(1) = 1gcd(1)=1, gcd(2,3) = 1gcd(2,3)=1, and gcd(4,5) = 1gcd(4,5)=1. Thus, the arithmetic mean = \frac{(1 + 1 + 1)}{3} = 1 
// 3
// (1+1+1)
// ​
//  =1. Hence, we can have 33 such subarrays.

// Test case 44: It is impossible to find 33 non-empty, non-intersecting subarrays which satisfy the given condition.

#include<bits/stdc++.h>
using namespace std;

int findGcd(vector<int>a){
	int ans=a[0];
	for(int i=1;i<a.size();i++){
		ans=(__gcd(a[i],ans));
	}
	return ans;
}

void solve(){
	int n,k;cin>>n>>k;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];

    int G=findGcd(a);
    int cnt=0;
    int g=0;
    for(int i=0;i<n;i++){
    	g=__gcd(g,a[i]);
    	if(g==G)cnt++,g=0;
    }

    if(cnt>=k)cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}