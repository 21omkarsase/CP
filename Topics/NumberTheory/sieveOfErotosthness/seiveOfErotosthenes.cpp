#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool a[n + 1];
    for (int i = 0; i <= n; i++)
        a[i] = 1;
    a[0] = a[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = 0;
            }
        }
    }
    cout << "Prime numbers in the range 0 to " << n << " are :" << endl;
    for (int i = 2; i <= n; i++)
    {
        if (a[i])
            cout << i << " ";
    }
    return 0;
}