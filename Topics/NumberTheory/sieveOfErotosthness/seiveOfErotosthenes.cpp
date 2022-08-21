#include <iostream>
using namespace std;

// T.C N(log(log n))

// seive is used
//  we mark multiple of prime no up to primeNO*primeNo<=n
// and unmarked ele will be prime

int main()
{
    int n;
    cin >> n;
    bool a[n + 1];
    for (int i = 0; i <= n; i++)
        a[i] = 1;
    a[0] = a[1] = 0;

    for (int i = 2; i * i <= n; i++) // N times
    {
        if (a[i])
        {
            for (int j = i * i; j <= n; j += i)
                a[j] = 0;
            // for every i 1/i times
            // therefor total == n/2 +  n/3 + n/4 +...
            //  total t.c N + (1/2  + 1/3 + 1/4 + ...)
            //    N(log(log n ))
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

// for(int i=l;i<=r;i++){
//      for (int j = 2; j * j <= i;j++){
//         if(j%i==0){
//            flag=true
//            cout << "Non prime" << endl;
//          }
//      }
//      if(!flag)cout<<"Prime"<<endl;
// }
