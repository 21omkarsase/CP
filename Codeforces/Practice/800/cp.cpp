#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> m;

    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }

    int ans = m.size();

    if (ans & 1)
        cout << "IGNORE HIM!" << endl;
    else
        cout
            << "CHAT WITH HER!" << endl;

    return 0;
}