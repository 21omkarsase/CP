#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>v(n,0);
	for(int i=0;i<n;i++)
		cin>>v[i];

	int ans=0;
	ans+=n;
    
    bool fT=true;
    int cnt=0;
	for(int i=0;i<n-1;i++){
		if(v[i]<v[i+1] or fT){
			cnt++;
		}
		if(v[i]>v[i+1] and !fT){
			if(cnt>0){
				cnt++;
				ans+=(((cnt*(cnt+1))/2)-(cnt));
				cnt=0;
				fT=true;
				i--;
				continue;
			}
		}
		if(fT){
			fT=false;
		}
	}

	if(cnt>0){
		cnt++;
		ans+=(((cnt*(cnt+1))/2)-(cnt));
	}

	cout<<ans<<"\n";

}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}