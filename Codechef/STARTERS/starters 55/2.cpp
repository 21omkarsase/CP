#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n; 
	vector<int>a(n,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;cin>>m;
	unordered_map<int,int>mp;
	for(int i=0;i<m;i++){
		int x;cin>>x;
		mp[x]++;
	}

	for(int i=0;i<n;i++){
		if(mp.find(a[i])==mp.end())cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}