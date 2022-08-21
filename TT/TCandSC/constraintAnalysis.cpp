#include <bits/stdc++.h>
using namespace std;

//arr of size n

// Constraints

// (1)
// 1<=T<=1000
// 1<=N<=1000
// 1<=A[i]<=1000


// (2)
// 1<=T<=100000
// 1<=N<=100000
// 1<=A[i]<=100000


// (2)
// 1<=T<=100000
// 1<=N<=100000
// 1<=A[i]<=100000
   //SUM OF N OVER ALL TEST CASES IS <10^7

void solve(){
	int n;cin>>n;
	int s=0;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		s+=x;
	}
	
	// for (1) constraints
		// T.C O(T*N)
	    //as n=t T.C O(N^2)
	    // O(N^2) --> FOR N=10^3(worse case)  TOTAL ITERATIONS WILL BE 10^6
	    // SO IT WILL  WORK IN 1S
	
	// for (2) constraints
		// T.C O(T*N)
	    //as n=t T.C O(N^2)
	    // O(N^2) --> FOR N=10^5(worse case)  TOTAL ITERATIONS WILL BE 10^10
	    // SO IT WILL NOT WORK IN 1S
	
	// for (3) constraints
		// T.C O(T*N)
	    //as n=t T.C O(N^2)
	   // O(N^2) --> FOR N=10^5(worse case)  TOTAL ITERATIONS WILL BE 10^10
	    // SO IT WILL NOT WORK IN 1S
	
	   //But
			//SUM OF N OVER ALL TEST CASES IS <10^7
	        // for all iterations 
	        // sum of all iterations over all test cases <=10^7
	        //so it will work
	
}

int main(){
	int t;cin>>t;
	
	while(t--)
		solve();
	
	return 0;
}