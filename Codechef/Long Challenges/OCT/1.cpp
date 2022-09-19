#include<bits/stdc++.h>
using namespace std;

void solve(){
	int w,x,y,z;cin>>w>>x>>y>>z;
	cout<<(w+(x*z)-(y*z))<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}
