// C. Stripes
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// On an 8×8 grid, some horizontal rows have been painted red, and some vertical columns have been painted blue, in some order. The stripes are drawn sequentially, one after the other. When the stripe is drawn, it repaints all the cells through which it passes.

// Determine which color was used last.

// The red stripe was painted after the blue one, so the answer is R.
// Input
// The first line of the input contains a single integer t (1≤t≤4000) — the number of test cases. The description of test cases follows. There is an empty line before each test case.

// Each test case consists of 8 lines, each containing 8 characters. Each of these characters is either 'R', 'B', or '.', denoting a red square, a blue square, and an unpainted square, respectively.

// It is guaranteed that the given field is obtained from a colorless one by drawing horizontal red rows and vertical blue columns.

// At least one stripe is painted.

// Output
// For each test case, output 'R' if a red stripe was painted last, and 'B' if a blue stripe was painted last (without quotes).

// Example
// inputCopy
// 4

// ....B...
// ....B...
// ....B...
// RRRRRRRR
// ....B...
// ....B...
// ....B...
// ....B...

// RRRRRRRB
// B......B
// B......B
// B......B
// B......B
// B......B
// B......B
// RRRRRRRB

// RRRRRRBB
// .B.B..BB
// RRRRRRBB
// .B.B..BB
// .B.B..BB
// RRRRRRBB
// .B.B..BB
// .B.B..BB

// ........
// ........
// ........
// RRRRRRRR
// ........
// ........
// ........
// ........
// outputCopy
// R
// B
// B
// R
// Note
// The first test case is pictured in the statement.

// In the second test case, the first blue column is painted first, then the first and last red rows, and finally the last blue column. Since a blue stripe is painted last, the answer is B.



#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n=8;
	vector<vector<char>>v(n,vector<char>(n,'.'));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}

	for(int i=0;i<n;i++){
	    bool flag=true;
		for(int j=0;j<n;j++){
			if(v[i][j]!='R'){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<"R\n";
			return;
		}
	}

	cout<<"B\n";

}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}