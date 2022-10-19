#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;cin>>a>>b>>c;

	if((a+b)&1 or (b+c)&1 or (a+c)&1)
		cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}