#include<bits/stdc++.h>
using namespace std;

#define N 101
#define mod 1000000007 
#define rep(i,n) for(long long int i=0;i<n;i++)



void printMat(vector<vector<long long int>>ar,long long int dim){
	rep(i,dim){
		rep(j,dim)
			cout<<ar[i][j]<<" ";
		cout<<endl;	
	}
}

void mul(vector<vector<long long int>>&A,vector<vector<long long int>>&B,long long int dim){
	vector<vector<long long int>>res(dim+1,vector<long long int>(dim+1,0));
	
	rep(i,dim){
		rep(j,dim){
			res[i][j]=0;
			rep(k,dim)
				res[i][j] = (res[i][j] % mod + ((A[i][k] % mod) * (B[k][j] % mod) % mod)) % mod;
		}
	}
	rep(i,dim)rep(j,dim)A[i][j]=res[i][j];
}

void power(vector<vector<long long int>>&ar,vector<vector<long long int>>&I,long long int dim,long long int n){
	rep(i,dim)rep(j,dim){
		if(i==j)I[i][j]=1;
	}
	while(n){
		if(n&1)
			mul(I,ar,dim),n--;
		else 
			mul(ar,ar,dim),n/=2;
	}
	rep(i,dim)rep(j,dim) ar[i][j]=I[i][j];	
	
}

void solve()
{	
	long long int dim,n;cin>>dim>>n;
	
	vector<vector<long long int>>ar(N,vector<long long int>(N,0)),I(N,vector<long long int>(N,0));

	rep(i,dim)rep(j,dim)cin>>ar[i][j];
	
	power(ar,I,dim,n);
	printMat(ar,dim);
	
}

int main(){
	long long int t;
	cin>>t;
	
	while(t--)
		solve();
	return 0;
}