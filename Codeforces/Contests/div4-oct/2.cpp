#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	unordered_map<int,int>m;
	bool flag=true;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		m[x]++;
		if(m[x]>1){
			flag=false;
		}
	}

	if(flag)
		cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}