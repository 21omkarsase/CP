#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;cin>>n;
   
   vector<int>a(n);
   unordered_map<int,int>m;

   for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
   }
   int cnt=0,pt=0;
   for(int i=1;i<n;i++){
     if(a[i]<a[i-1] or a[i]==0 or m[a[i]]==0){
        int flag=true;
        for(int j=pt;j<i;j++){
            if(m[a[j]]==0)flag=false;
            a[j]=0;
            if(flag)cnt++;
            m[a[j]]=0;
        }
     }
   }
   for(auto i:a){
    cout<<i<<" ";
   }cout<<endl;
   
   cout<<cnt<<endl;
   
}

int main()
{
    // int t;cin>>t;
    
    // while(t--)
        solve();
}