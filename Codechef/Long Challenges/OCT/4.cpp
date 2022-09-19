#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n;cin>>n;
	vector<ll>a(n,0);
	bool neg=false,pos=false;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0)neg=true;
		if(a[i]>=0)pos=true;
	}

	ll mn=*min_element(a.begin(),a.end());
	ll mx=*max_element(a.begin(),a.end());
 
    if(pos and neg){
		ll mniv=mx*mn;
		cout<<mniv<<" ";
		if(abs(mn)>mx)
			cout<<(mn*mn)<<"\n";
		else cout<<(mx*mx)<<"\n";
	}
	else if(pos and !neg){
		cout<<(mn*mn)<<" "<<(mx*mx)<<"\n";
	}else{
		cout<<(mx*mx)<<" "<<(mn*mn)<<"\n";
	}
	
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}