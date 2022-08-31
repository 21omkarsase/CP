#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;cin>>x>>y;
    x=x-1;
    y=y-1;
    vector<int>xc,yc;
    vector<vector<int>>ans(8,vector<int>(8,0));
     ans[x][y]=1;
    if((x==0 and (y==0 or y==7)) or (x==7 and (y==0 or y==7))){
        if(x==0 and y==0){
            xc.push_back(x+2);
            yc.push_back(y+1);
        }
        else if(x==7 and y==0){
            xc.push_back(x-2);
            yc.push_back(y+1);
        }
        else if(x==0 and y==7){
            xc.push_back(x+2);
            yc.push_back(y-1);
        }
        else if(x==7 and y==7){
            xc.push_back(x-2);
            yc.push_back(y-1);
    }
    }else if((x==0 and y!=0) or (y==0 and x!=0)){
        if(x!=0 and y==0){
            xc.push_back(x-1);
            yc.push_back(y+2);
            xc.push_back(x+1);
            yc.push_back(y+2);
        }else if(x!=0 and y==7){
            xc.push_back(x-1);
            yc.push_back(y-2);
            xc.push_back(x+1);
            yc.push_back(y-2);
        }
        else if(x==0 and y!=0){
            xc.push_back(x+2);
            yc.push_back(y-1);
            xc.push_back(x+2);
            yc.push_back(y+1);
        }else if(x==7 and y!=0){
            xc.push_back(x-2);
            yc.push_back(y-1);
            xc.push_back(x-2);
            yc.push_back(y+1);
    }
    }else{
        if(7-x>=4){
            if(7-y>=4){
                xc.push_back(x-1);
                yc.push_back(y+2);
                xc.push_back(x+1);
                yc.push_back(y+2);
                xc.push_back(x+2);
                yc.push_back(y-1);
            }else{
                xc.push_back(x-1);
                yc.push_back(y-2);
                xc.push_back(x+1);
                yc.push_back(y-2);
                xc.push_back(x+2);
                yc.push_back(y+1);
            }
        }else{
            if(7-y>=4){
                xc.push_back(x-1);
                yc.push_back(y+2);
                xc.push_back(x+1);
                yc.push_back(y+2);
                xc.push_back(x-2);
                yc.push_back(y-1);
            }else{
                xc.push_back(x-1);
                yc.push_back(y-2);
                xc.push_back(x+1);
                yc.push_back(y-2);
                xc.push_back(x-2);
                yc.push_back(y+1);
            }
        }
    }
    for(int i=0;i<xc.size();i++){
        ans[xc[i]][yc[i]]=2;
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    for(int i=0;i<=xc.size();i++){
        cout<<xc[i]<<" "<<yc[i]<<endl;
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
