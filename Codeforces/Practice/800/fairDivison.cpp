#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>v(n,0);
	for(int i=0;i<n;i++)cin>>v[i];

		if(n==1){
			cout<<"NO\n";
			return;
		}
		if(n==2){
			if(v[0]==v[1])
				cout<<"YES\n";
			else cout<<"NO\n";
			return;
		}

	sort(v.begin(),v.end(),greater<int>());

    int a=v[0],b=v[1];
    for(int i=2;i<n;i++){
    	if(a>b){
    		b+=v[i];
    	}else
    	    a+=v[i];
    }

    if(a==b)
    	cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}