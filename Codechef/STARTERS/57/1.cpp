#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;cin>>a>>b; 
	if(a&1 and b&1){
		cout<<"NO\n";
		return;
	}
	if(!(a&1) and !(b&1)){
		cout<<"YES\n";
		return;
	}
	if(!(a&1) and b&1){
		if(b==1){
			cout<<"NO\n";
			return;
		}
	}
	if(a&1 and !(b&1)){
		if(a==1){
			cout<<"NO\n";
			return;
		}
	}
    

    cout<<"YES\n";
	
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}