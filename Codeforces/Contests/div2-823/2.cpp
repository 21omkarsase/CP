#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;cin>>n;
	vector<int>x(n);
	vector<int>t(n);
	int mx=INT_MIN,mn=INT_MAX; 
	for(int i=0;i<n;i++){
		cin>>x[i];
		mx=max(mx,x[i]);
		mn=min(mn,x[i]);
	}
	for(auto &i:t)cin>>i;
    
    ll ans=0;
	float final=INT_MAX;
	for(int i=mn;i<=mx;i++){
		for(int j=0;j<n;j++){
			ans+=(abs(i-x[j])+t[j]);
		}
		// cout<<fin<<" : ";
		float val=(float)ans/n;
		final=min(final,val);
	}	cout<<final<<"\n";
    
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}