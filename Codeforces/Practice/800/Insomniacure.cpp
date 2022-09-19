#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e;cin>>a>>b>>c>>d>>e;

	vector<int>v(e,0);
	int ans=0;

	for(int i=0;i<e;i++){
		if((i+1)%a==0 and !v[i])v[i]=1,ans++;
		if((i+1)%b==0 and !v[i])v[i]=1,ans++;
		if((i+1)%c==0 and !v[i])v[i]=1,ans++;
		if((i+1)%d==0 and !v[i])v[i]=1,ans++;
	}

	cout<<ans<<endl;

	return 0;
}