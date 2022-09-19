#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;cin>>a>>b>>c;

	long long f=abs(b-a);
	long long s=abs(a-abs(b-c));

	if(f==s)cout<<3<<"\n";
	else if(f>s)cout<<1<<"\n";
	else cout<<2<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}