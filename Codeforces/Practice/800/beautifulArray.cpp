#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    unordered_map<char,int>m;
    for(auto i:s)m[i]++;
    
    int n=stoi(s);  
    while(1){
        n+=1;
        int ld=n/10;
        char ch=ld-48;
        m[ch]++;
        for(auto i:m){
            if(i.second>1){
                
            }
        }
        if(m[ch]>1){
            
        }
    }
    
    return 0;
}
