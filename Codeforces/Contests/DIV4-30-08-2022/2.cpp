#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	string a,b;cin>>a>>b;

	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			if(a[i]=='B' and b[i]=='G' or a[i]=='G' and b[i]=='B'){
				continue;
			}else {
				cout<<"NO"<<endl;
				return;
			}
		}
	}

	cout<<"YES"<<endl;
}
int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}