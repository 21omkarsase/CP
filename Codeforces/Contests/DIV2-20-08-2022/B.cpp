#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, b,s;
    cin >> n >> k >> b>>s;
    
    //minimum sum should be greater than k*b
    //minimum sum should be greater than ((k*b)+(k-1))+((k-1)*(n-1))  ==  (k * b) +((k - 1)*(n))
    // we can add k-1 to first ele so first ele will be (k-1+(k*b))

    ll st = k * b, en = (k * b) +((k - 1)*(n));
    vector<ll> a(n,0);
  
    if (s < st or s > en)
    {
        cout << -1 << endl;
        return;
    }
    
    a[0]=(k * b);
    s -= (k * b);
    
    if(s>0){
        a[0]=a[0]+min(k-1, s);  //adding k-1 or s in first ele 
        s=s-min(k-1, s);
    }
    
    // cout<<st<<" "<<en<<endl;
    for (ll i=1;i<n;i++)
    {
        if(s<0){
            break;
        }
        a[i]=(min(s, k - 1));
        s -= min(k - 1, s);
    }
    

    for (ll i=0;i<n;i++)
        cout <<a[i] << " ";
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}