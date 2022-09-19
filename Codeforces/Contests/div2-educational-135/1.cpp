#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    // int me=INT_MIN,ans=0;
    // for(int i=0;i<n;i++){
    // 	int x;cin>>x;
    // 	if(x>me)me=x,ans=i;
    // }
    // cout<<ans+1<<endl;
    vector<int>a(n,0);
    for(auto &e:a)cin>>e;
    cout<<max_element(a.begin(),a.end())-a.begin()+1<<"\n";  //index of max element(1 base)
  }
}