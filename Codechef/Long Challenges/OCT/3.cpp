#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n;cin>>n;

	unordered_map<ll,ll>m;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		m[x]++;
	}
    ll ans=0;
	for(auto i:m){
		if(i.second>1){
			ans+=(((i.second)*(i.second-1))/2);
		}
	}
	cout<<ans<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}