#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	if(n&1){
		int even=((n-1)/2);
		int odd=n-even;
		if(odd&1){
			for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}cout<<endl;
		}else{
			for(int i=5;i>=n)
		}
	}else{
		for(int i=n-2;i>=1;i--)
			cout<<i<<" ";
		cout<<n-1<<" "<<n<<endl;
	}
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}