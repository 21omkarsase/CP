#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(5); // every ele will be 0

    // printing using range loops wihtout reference
    for (auto i : a) // it passes i as a copy
    {
        i++; // so i will be not increment in og vector;
    }

    for (auto i : a)
        cout << i << " ";
    cout << endl;

    // printing using range loops with reference
    for (auto &i : a) // by using & operator
        i++;          // so i will be increment in og vector;
    for (auto i : a)
        cout << i << " ";
    cout << endl;

    // same can be done with maps

    return 0;
}
