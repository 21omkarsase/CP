#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	string s;cin>>s;

	vector<long long>curr(n,0);
	vector<long long>be(n,0);
	vector<long long>py(n,0);

	long long sum=0;

    bool flag=false;
    int mid;
    if(n&1){
    	flag=true;
    	mid=n/2;
    }
	for(int i=0;i<n;i++){
		if(flag and i==mid){
			continue;
		}
		if(s[i]=='L'){
			curr[i]=i;
			sum+=curr[i];
		}else{
			curr[i]=n-i-1; 
			sum+=curr[i];
		}
		be[i]=n-curr[i]-1;
	}
	for(int i=0;i<n;i++){
		py[be[n-i]-1]=be[i];
		// cout<<be[n-i-1]<<" "<<be[i]<<endl;
	}
	cout<<endl;

	// for(auto i:curr)
	// 	cout<<i<<" ";
	// cout<<endl;
	for(auto i:be)
		cout<<i<<" ";
	cout<<endl;
	for(auto i:py)
		cout<<i<<" ";
	cout<<endl;

	// vector<long long>ans(n);

	// for(int i=0;i<n;i++){
	// 	int k=i+1;
	// 	long long s=sum;
	// 	int j=0;
	// 	while(k>0){
	// 		s-=py[n-j];
	// 		s+=py[j];
	// 		j++;
	// 	}
	// 	cout<<s<<" ";
	// }
	// cout<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}