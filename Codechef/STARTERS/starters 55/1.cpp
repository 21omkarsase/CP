#include<bits/stdc++.h>
using namespace std;

void solve(){

	int x,y;cin>>x>>y;

	if(x>y)cout<<"NEW PHONE"<<endl;
	else if(x<y)cout<<"REPAIR"<<endl;
	else cout<<"ANY"<<endl;

	
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}