#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	int ans=INT_MIN;
	int mn=INT_MIN;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x>mn){
			ans=i+1; 
		}
	}

	cout<<ans<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}