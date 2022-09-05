#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	if(n!=5){
		cout<<"NO"<<endl;
		return;
	}
	string s;cin>>s;
	
	if(s.find('T')!=-1 and s.find('i')!=-1 and s.find('m')!=-1 and s.find('u')!=-1 and s.find('r')!=-1 ){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;

	//cout<<(s==name ? "YES" : "NO")<<endl;
	// return s==name ? "YES" : "NO";

}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}