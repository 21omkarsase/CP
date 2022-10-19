#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	string s;cin>>s;

	int c=0;
	for(int i=0;i<n;i++){
		if(i<=n-2){
			if(s[i]==s[i+1])
				c++; 
		}
	}
	cout<<c<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}