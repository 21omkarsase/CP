#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	
	cout<<(n+1)/2<<"\n";

	int i=2,j=3*n;

	while(i<j){
		cout<<i<<" "<<j<<"\n";
		i+=3;
		j-=3;
	}

}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}