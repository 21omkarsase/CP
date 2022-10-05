#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    unordered_map<char,char>m;
   
    m['a']='a'; m['e']='e';  m['i']='i'; m['o']='o'; m['u']='u';
    
    while(t--){
        bool flag=false;
        string s;cin>>s;
        int n=s.size();
        for(int i=0;i<=n-3;i++){
            if(m.find(s[i])!=m.end() and m.find(s[i+1])!=m.end()  and m.find(s[i+2])!=m.end() ){
                flag=true;
                break;
            }
        }
        
        if(flag)
        cout<<"Happy\n";
        else
        cout<<"Sad\n";
    }
	return 0;
}
