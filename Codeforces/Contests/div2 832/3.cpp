#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	
	vector<int>a(n,0);
	for(auto &i:a)cin>>i;

	cout<<(a[0]==(*min_element(a.begin(),a.end()))?"Bob":"Alice")<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}