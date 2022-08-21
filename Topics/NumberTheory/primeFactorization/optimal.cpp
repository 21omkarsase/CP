#include <iostream>
using namespace std;

void solve(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        // if n is composite then at least one prime divisor is present below sqrt(N)
        if (!(n % i))
        {
            int cnt = 0;
            while (!(n % i))
                cnt++, n /= i;
            cout << "( " << i << " ^ " << cnt << " ) + ";
        }
    }
    if (n > 1) // if for loop completed and n is still greater than 1 then it indicates n is prime
        cout << "( " << n << " ^ " << 1 << " ) + ";
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}