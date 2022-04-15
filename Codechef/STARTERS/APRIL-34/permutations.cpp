#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    int xo = 0;
    for (int i = 0; i < n; i++)
    {
        xo ^= abs(a[i] - (i + 1));
    }

    if (xo == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    do
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == i + 1)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            display(a, n);
        }
    } while (next_permutation(a, a + n));

    return 0;
}