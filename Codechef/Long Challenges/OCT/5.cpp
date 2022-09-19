#include <bits/stdc++.h>
using namespace std;

// #define int long long

void solve()
{
	int n;
	cin >> n;

	vector<int> g(n, 0);
	vector<int> w(n, 0);

	for (auto &i : g)
		cin >> i;
	for (auto &i : w)
		cin >> i;

	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
		v.push_back({g[i],w[i]});

	sort(v.begin(),v.end());

	int mx=0,cnt=0;
	for(int i=n-1;i>=0;i--){
		if(v[i].second>mx)cnt++;
		mx=max(mx,v[i].second);
	}

	cout<<cnt<<"\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}