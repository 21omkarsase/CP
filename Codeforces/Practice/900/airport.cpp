#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n,m;cin>>n>>m;
    ll sum=0;
	vector<int>a(m),b(m);
	for(int i=0;i<m;i++){
		cin>>a[i];
		b[i]=a[i];
	}

    ll mx=0,mn=0;
	for(int i=0;i<n;i++){
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		mx+=a[m-1];
		a[m-1]--; 
		mn+=b[0];
		b[0]--;
		if(!b[0])b[0]=12345679;
	}

	cout<<mx<<" "<<mn<<"\n";
	
	return 0;
}