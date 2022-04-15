#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;


    while(t--)
    {
      
      int n,m,k;
      cin>>n>>m>>k;


      int ans=0;
      for(int i=1;i<=n;i++)
      {
           if(min(i,m)%2==1)
           {
               ans^=k+i+1;
           }
      }

      for(int j=2;j<=m;j++)
      {
          if(min(n,m-j+1)%2==1)
          {
              ans^=k+n+j;
          }
      }

      cout<<ans<<endl;

    }
    return 0;
}