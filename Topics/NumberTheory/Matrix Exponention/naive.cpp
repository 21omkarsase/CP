#include<bits/stdc++.h>
using namespace std;

#define N 101
#define rep(i,n) for(int i=0;i<n;i++)

vector<vector<int>>ar(N,vector<int>(N)),I(N,vector<int>(N));

void printMat(vector<vector<int>>ar,int dim){
	rep(i,dim){
		rep(j,dim)
			cout<<ar[i][j]<<" ";
		cout<<endl;	
	}
}

void mul(vector<vector<int>>I,vector<vector<int>>&ar,int dim){
	vector<vector<int>>res(dim+1,vector<int>(dim+1));
	
	rep(i,dim){
		rep(j,dim){
			res[i][j]=0;
			rep(k,dim)
				res[i][j]+=ar[i][k]*I[i][j];
		}
	}
	
	rep(i,dim)rep(j,dim)ar[i][j]=res[i][j];
}

void power(vector<vector<int>>&ar,int dim,int n){
	//intializing identity matrix
	rep(i,dim)rep(j,dim){
		if(i==j)I[i][j]=1;
		else I[i][j]=0;
	}
	
	//multiplying ar n times to get ar^n using identity matrix
	rep(i,n){
		mul(I,ar,dim);
	}
		
		
	
}

void solve()
{	
	int dim,n;cin>>dim>>n;
	
	// for(int i=0;i<dim;i++){
	// 	for(int j=0;j<dim;j++){
	// 		cin>>ar[i][j];
	// 	}
	// }
	
	rep(i,dim)rep(j,dim)cin>>ar[i][j];
	
	power(ar,dim,n);
	printMat(ar,dim);
	
}

int main(){
	int t;
	cin>>t;
	
	while(t--)
		solve();
	return 0;
}