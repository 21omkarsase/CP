#include <iostream>
using namespace std;

void solve(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!(n % i))
        {
            int cnt = 0;
            while (!(n % i))
            {
                cnt++;
                n /= i;
            }
            cout << "( " << i << " ^ " << cnt << " ) + ";
        }
    }
}

// T.C O(n)

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}