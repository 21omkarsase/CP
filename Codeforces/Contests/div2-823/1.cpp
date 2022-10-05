#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,c;cin>>n>>c;
	vector<int>v(n);
	for(auto &i:v)cin>>i;

	unordered_map<int,vector<int>>m;
    for(int i=0;i<n;i++){
    	m[v[i]].emplace_back(i);
    }

    long long ans=0;
    for(auto i:m){
    	int amt=i.second.size();
    	ans+=(min(amt,c));
    }

    cout<<ans<<"\n";

}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}