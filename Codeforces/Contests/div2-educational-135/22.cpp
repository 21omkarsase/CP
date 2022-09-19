
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        if((n%2)==0){
            for(i=2; i<n; i+=2){
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<n-1<<" "<<n<<"\n";
        }else{
            cout<<"1 ";
            for(i=3; i<n; i+=2){
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<n-1<<" "<<n<<"\n";
        }
    }
}