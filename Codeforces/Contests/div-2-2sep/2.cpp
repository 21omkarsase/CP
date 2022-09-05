// B. Madoka and Underground Competitions
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Madoka decided to participate in an underground sports programming competition. And there was exactly one task in it:

// A square table of size n×n, where n is a multiple of k, is called good if only the characters '.' and 'X' are written in it, as well as in any subtable of size 1×k or k×1, there is at least one character 'X'. In other words, among any k consecutive vertical or horizontal cells, there must be at least one containing the character 'X'.

// Output any good table that has the minimum possible number of characters 'X', and also the symbol 'X' is written in the cell (r,c). Rows are numbered from 1 to n from top to bottom, columns are numbered from 1 to n from left to right.

// Input
// The input consists of multiple test cases. The first line contains a single integer t (1≤t≤100) — the number of test cases. Description of the test cases follows.

// The first and the only line of each test case contains four integers n, k, r, c (1≤n≤500,1≤k≤n,1≤r,c≤n) — the size of the table, the integer k and the coordinates of the cell, which must contain the character 'X'. It is guaranteed that n is a multiple of k.

// It is guaranteed that the sum of n over all test cases does not exceed 500.

// Output
// For each test case, output n lines, each consisting of n characters '.' and 'X', — the desired table. If there are several answers, then you can output anyone.

// Example
// inputCopy
// 3
// 3 3 3 2
// 2 1 1 2
// 6 3 4 2
// outputCopy
// X..
// ..X
// .X.
// XX
// XX
// .X..X.
// X..X..
// ..X..X
// .X..X.
// X..X..
// ..X..X

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k,r,c;
	cin>>n>>k>>r>>c;
	
	r-=1,c-=1;

	vector<vector<char>>ans(n,vector<char>(n,'.'));

	for(int j=c;j<n;j+=k){
		ans[r][j]='X';
		for(int x=r-1,y=j+1;x>=0;x--,y++){
			if(y>=n)y=0;
			ans[x][y]='X';
			
		}
		for(int x=r+1,y=j-1;x<n;x++,y--){
			if(y<=-1)y=n-1;
			ans[x][y]='X';
		}
	}
	for(int j=c;j>=0;j-=k){
		ans[r][j]='X';
		for(int x=r-1,y=j+1;x>=0;x--,y++){
			if(y>=n)y=0;
			ans[x][y]='X';
			
		}
		for(int x=r+1,y=j-1;x<n;x++,y--){
			if(y<=-1)y=n-1;
			ans[x][y]='X';
		}
	}

	for(auto v:ans){
		for(auto i:v)
			cout<<i;
		cout<<endl;
	}
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}