// find value of kth prime no
// k is one of the prime no.in first 5 million prime no;

#include <iostream>
#include <vector>
using namespace std;

#define n 90000000

vector<int> v;
bool isPrime[n + 1];

void solve()
{
    int k;
    cin >> k;

    cout << v[k - 1] << endl;
}

int main()
{
    int t = 1;
    // cin >> t;

    isPrime[0] = isPrime[1] = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (!isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 1;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (!isPrime[i])
            v.push_back(i);
    }

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
