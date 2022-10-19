#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<char>s(n,0);
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int ans=0,oc=0,zc=0;
	for(int i=0;i<n;i++){
		if(s[i]=='1')oc++;
		else zc++;

		if(oc&1){
			if(oc==1){
				if(zc>=1){
					ans++;
					oc=0,zc=0;
				}
			}else if(oc>1){
				ans++;
				oc=0,zc=0;
			}
		}
	}
	cout<<ans<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}