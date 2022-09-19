#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll a,x,b,y;cin>>a>>x>>b>>y; 

	ll s1 =a*y , s2=b*x;



	if(s1==s2)cout<<"Equal"<<"\n";
	else if(s1>s2)cout<<"Alice"<<"\n";
	else cout<<"Bob"<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}