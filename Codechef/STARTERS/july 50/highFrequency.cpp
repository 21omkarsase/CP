#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    int a[n],maxEle=INT_MIN;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	maxEle=max(maxEle,a[i]);
    }  
    
    vector<int>v(maxEle,0);  
    for(int i=0;i<n;i++){  
    	v[a[i]]++;
    }
    
    sort(v.begin(),v.end());
    
    int ans1=(v[0]+1)/2,ans2=v[1];
    
    cout<<max(ans2,ans1);   
    
}

int main(){
    int t;
    cin>>t;
    solve();
    return 0;
}