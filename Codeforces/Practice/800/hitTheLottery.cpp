// A. Hit the Lottery
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Allen has a LOT of money. He has n dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

// Input
// The first and only line of input contains a single integer n (1≤n≤109).

// Output
// Output the minimum number of bills that Allen could receive.

// Examples
// inputCopy
// 125
// outputCopy
// 3
// inputCopy
// 43
// outputCopy
// 5
// inputCopy
// 1000000000
// outputCopy
// 10000000
// Note
// In the first sample case, Allen can withdraw this with a 100 dollar bill, a 20 dollar bill, and a 5 dollar bill. There is no way for Allen to receive 125 dollars in one or two bills.

// In the second sample case, Allen can withdraw two 20 dollar bills and three 1 dollar bills.

// In the third sample case, Allen can withdraw 100000000 (ten million!) 100 dollar bills.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;

	unordered_map<int,int>m;
	m[1]=1,m[5]=5,m[10]=10,m[20]=20,m[100]=100;

	int cnt=0;
	while(n){
		int curr=-1;
		for(auto i: m){
			if(i.second<=n)
			curr=max(curr,i.second);
		}
		int fact=n/curr; 
		cnt+=fact;
		n-=(curr*fact);
	}

	cout<<cnt<<"\n";
	
	return 0;
}