#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int n,m;cin>>n>>m;

	ll ans=0; 
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(abs(1-x)>abs(m-x))
			ans+=(abs(1-x));
		else ans+=(abs(m-x));
	}


	cout<<ans<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}