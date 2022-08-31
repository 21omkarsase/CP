#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;cin>>n;
	
	if(n==1){
		int a;cin>>a;
		cout<<abs(a)<<endl;
		return;
	}
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	for(int i=0;i<n-1;i++){
		if((i=n-2 and a[n-1]>=2) or (a[i+1]>a[i])){
			if(a[i]*2<=a[i+1]){
					a[i+1]-=(a[i]*2);
					a[i]=0;
				}else{
					if(a[i+1]&1){
						a[i]=a[i]-(abs((a[i+1]-1)/2));
						a[i+1]=1;
					}else{
						a[i]=a[i]-(abs(a[i+1]/2));
						a[i+1]=0;
					}
				}
				int ans=0;
	for(auto i:a){
		ans+=abs(i);
	}
	cout<<ans<<endl;
				return;
		}
		
		if(a[i+1]>=2){
			if((a[i]==a[i+1] and a[i+2]<=a[i]) or (a[i+1]>a[i]) or (a[i]<a[i+1]<a[i+2])){
				if(a[i]*2<=a[i+1]){
					a[i+1]-=(a[i]*2);
					a[i]=0;
				}else{
					if(a[i+1]&1){
						a[i]=a[i]-(abs((a[i+1]-1)/2));
						a[i+1]=1;
					}else{
						a[i]=a[i]-(abs(a[i+1]/2));
						a[i+1]=0;
					}
				}
			}
		}
	}
	int ans=0;
	for(auto i:a){
		ans+=abs(i);
	}
	cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}