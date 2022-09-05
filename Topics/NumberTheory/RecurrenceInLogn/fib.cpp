#include<bits/stdc++.h>
using namespace std;

#define mod 10000007
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

void mul(vector<vector<ll>>&A,vector<vector<ll>>&B,int dim){
	vector<vector<ll>>res(dim+1,vector<ll>(dim+1,0));
	rep(i,dim){
		rep(j,dim){
			rep(k,dim){
				// cout<<i<<" i "<<j<<" j "<<k<<" k "<<endl;
				long long x=(A[i][k]%mod)*(B[k][j]%mod);
				res[i][j]=res[i][j]+(x%mod);
			}
		}
	}

	rep(i,dim)
	   rep(j,dim)
	      A[i][j]=res[i][j];
}

void solve(){
	int a,b,n;
	vector<ll>ar(2,0);
	cin>>ar[0]>>ar[1]>>n;

    if(n==1){
    	cout<<ar[0]<<endl;
    	return;
    }else if(n==1){
    	cout<<ar[1]<<endl;
    	return;
    }else if(n==2){
    	cout<<ar[0]+ar[1]<<endl;
    	return;
    }

	n+=1;

	vector<vector<ll>>T(2,vector<ll>(2,0)),I(2,vector<ll>(2,0));
    T[0][0]=0,T[1][0]=T[1][1]=T[0][1]=1;
    I[0][0]=I[1][1]=1;
	// cout<<"1 1"<<endl;
    while(n){
    	if(n&1)
    		mul(I,T,2),n--;
    	else mul(T,T,2),n/=2;
    }

    

    ll f1=(ar[0]*T[0][0])+(ar[1]*T[1][0]);
    ll f2=(ar[0]*T[0][1])+(ar[1]*T[1][1]);

    cout<<"nth term : "<<f1<<" n+1th term : "<<f2<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}
