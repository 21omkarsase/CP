#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n; 

	int cnt=0;
    vector<int>a(n,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=1;i<n;i++){
        bool flag=false;
        while(a[i-1]==a[i]-1){
        	i++;
        	flag=true;
        }

        if(a[i]==a[i-1])cnt++;

        if(flag)cnt++;



		if(a[i]==a[i-1]-1){
			continue;
		}



		// if(a[i]==a[i-1]+1 or a[i]==a[i-1])cnt++;
	}

	if(a[1]==a[0])cnt++;

	cout<<cnt<<endl;
	
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}