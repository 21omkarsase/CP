#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;cin>>n;
    
    vector<int>a(n,0),b(n,0);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	cin>>b[i];
    }
    long long cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		if(a[i]<b[i]){
			cnt1+=(b[i]-a[i]);
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>b[i]){
			cnt2+=(a[i]-b[i]);
		}
	}
    	
    if(cnt1==cnt2){
    	cout<<cnt1<<endl;
    }
    else{
    	cout<<-1<<endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
