#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n;cin>>n;

	while(n){
		if(n%2!=0){
			cout<<"YES\n";
			return;
		}else{
			cout<<"NO\n";
			return;	
		} 
		n/=2;
	}

	cout<<"NO\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}
