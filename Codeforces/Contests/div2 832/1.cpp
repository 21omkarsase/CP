#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;cin>>n; 
	ll a=0,b=0;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x>0)a+=x;
		else if(x<0)b+=x;
	}
    if(abs(a)>abs(b)){
		cout<<abs(a)-abs(b)<<"\n";    	
    }else if(abs(a)<abs(b)) cout<<abs(b)-abs(a)<<"\n";
	else cout<<0<<"\n";
}
int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}