#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    ans = n + n/(m - 1);
    if (n%(m - 1) == 0)
        ans -= 1;

    cout<<ans<<"\n";

    return 0;
}