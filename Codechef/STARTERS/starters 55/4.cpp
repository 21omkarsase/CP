#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;cin>>a>>b;

	int sum=(b*(b+1))/2;
	if(a>=sum)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}