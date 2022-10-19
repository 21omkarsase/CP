#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;

	if(a==(b+c) or b==(a+c) or c==(a+b)){
		cout<<"YES\n";
	}else cout<<"NO\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}