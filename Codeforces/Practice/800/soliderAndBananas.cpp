#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,n,w;cin>>k>>n>>w;

	long long ans=0;
    
	int i=1;
	while(1){
		if(w==0)break;
		ans=ans+(i*k);
		i++,w--;
	}

	if(ans<=n)cout<<0<<endl;
	else cout<<(ans-n)<<endl;
	
	return 0;
}