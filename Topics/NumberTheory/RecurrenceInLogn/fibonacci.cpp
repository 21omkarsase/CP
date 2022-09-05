#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

void matrixMul(vector<vector<int>>A,vector<vector<int>>B,int n){
	vector<vector<int>>res(1+1,vector<int>(n+1,0));
	rep(i,n)
		rep(j,n)
		   rep(k,n)
			  res[i][j] = res[i][j]  + (A[i][k] * B[k][j]);
    
    cout<<"nth number and n+1th number : "<<endl;
    cout<<res[0][0]<<" "<<res[0][1]<<endl;
}

void mul(vector<vector<int>>&A,vector<vector<int>>&B,int n){
	vector<vector<int>>res(n+1,vector<int>(n+1,0));
	rep(i,n)
		rep(j,n)
		   rep(k,n)
			  res[i][j] = res[i][j]  + (A[i][k] * B[k][j]);
		      
    rep(i,n)
	    rep(j,n)
	       A[i][j]=res[i][j];
}

void solve(){
	int a,b,n;
	cin>>a>>b>>n;

	int k=2;  //as recurrence relation depends on first 2 terms
    
    //calculating nth power of transition matrix
    vector<vector<int>>T(k,vector<int>(k,0));
    T[0][0]=0,T[0][1]=1,T[1][0]=1,T[1][1]=1;

    //defining identity matrix
    vector<vector<int>>I(k,vector<int>(k,0));
    rep(i,k)
	    rep(j,k)
		    if(i==j)I[i][j]=1;

	rep(i,k){
		rep(j,k)
		   cout<<I[i][j]<<" ";
		cout<<endl;
	}
		
    while(n){
    	if(n&1)
			mul(I,T,k),n--;
		else
			mul(T,T,k),n/=2;
    }

    vector<vector<int>>S(1,vector<int>(k,0));
    S[0][0]=0,S[0][1]=1;

    mul(I,S,k);
    

	rep(i,k){
		rep(j,k)
		   cout<<I[i][j]<<" ";
		cout<<endl;
	}
		
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}