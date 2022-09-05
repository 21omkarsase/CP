#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ;cin>>n;

	if(n==1){
        cout<<1<<endl;
        return;

    }else if(n==2){
        cout<<4<<endl;
        return;

    }else if(n==3){
        cout<<7<<endl;
        return;
        
    }

	long long cnt=0;
	cnt+=n;

	int f=n/3;
	bool flag=false;

    cnt+=(f*4);
    long long x=n-f;
    if(x%2==0){
        cnt+=(x/2);
    }else{
        cnt+=((x/2)+1);
    }

	cout<<cnt<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}