// There are n chocolates, and you are given an array of n numbers where the i-th number Ai is the flavour type of the i-th chocolate. Sebrina wants to eat as many different types of chocolates as possible, but she also has to save at least x number of chocolates for her little brother.

// Find the maximum possible number of distinct flavour types Sebrina can have.

// Input:
// The first line contains an integer T --- the number of test cases.

// The first line of each test case consists of two integers n, x - The number of chocolates Sabrina has and the number of chocolates she has to save for her brother, respectively.

// The second line contains n integers A1,…,An, where the i-th chocolate has type Ai.

// Output:
// For each test case, output a single integer denoting the maximum possible number of distinct chocolate flavours Sabrina can eat.

// Constraints
// 1≤T≤10
// 1≤x≤n≤2⋅105

// 1≤Ai≤109
// Sum of n over all test cases do not exceed 2⋅105

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	
	ll t;
	cin>>t;
	
	while(t--)
	{
	    ll n,x;
	    cin>>n>>x;
	    
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    set<ll> st;
	    for(ll i=0;i<n;i++)
	    {
	        st.insert(a[i]);
	    }
	    ll size=st.size();
	    cout<<min(size,(n-x))<<endl;
	    
	}
	return 0;
}

