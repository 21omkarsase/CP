#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";

    if (n == 1)
    {
        char c = (s[0] - 48 - 1) + 'a';
        ans += c;
        cout<<ans<<"\n";
        return;
    }

    if (n == 2)
    {
        char c1 = (s[0] - 48 - 1) + 'a';
        ans += c1;
        char c2 = (s[1] - 48 - 1) + 'a';
        ans += c2;
        cout<<ans<<"\n";
        return;
    }

    if (n == 3)
    {
        if (s[2] == '0')
        {
            string str = "";
            str += s[0], str += s[1];
            int num = stoi(str);
            ans += ('a' + (num - 1));
        }
        else
        {
            char c1 = (s[0] - 48 - 1) + 'a';
            ans += c1;
            char c2 = (s[1] - 48 - 1) + 'a';
            ans += c2;
            char c3 = (s[2] - 48 - 1) + 'a';
            ans += c3;
        }
        cout<<ans<<"\n";
        return;
    }

    int i = 0;
    while (i < n - 3 and n >= 4)
    {
        if (s[i + 3] == '0' and s[i + 2] == '0')
        {
            char c = (s[i] - 48 - 1) + 'a';
            ans += c;
            string str = "";
            str += s[i + 1], str += s[i + 2];
            int num = stoi(str);
            char ch = 'a' + (num - 1);
            ans += ch;
            i += 4;
        }
        else if (s[i + 2] == '0' and s[i + 3] != '0')
        {
            string str = "";
            str += s[i], str += s[i + 1];
            int num = stoi(str);
            ans += ('a' + (num - 1));
            i += 3;
        }
        else if (s[i + 1] == '0')
        {
            string str = "";
            str += s[i], str += s[i + 1];
            int num = stoi(str);
            ans += ('a' + (num - 1));
            i += 2;
        }
        else
        {
            char c = (s[i] - 48 - 1) + 'a';
            ans += c;
            i++;
        }
    }
    

    int j=i;
        if (j == n-3)
        {
            if (s[j+2] == '0')
            {
                string str = "";
                str += s[j], str += s[j+1];
                int num = stoi(str);
                ans += ('a' + (num - 1));
            }
            else
            {
                char c1 = (s[j] - 48 - 1) + 'a';
                ans += c1;
                char c2 = (s[j+1] - 48 - 1) + 'a';
                ans += c2;
                char c3 = (s[j+2] - 48 - 1) + 'a';
                ans += c3;
            }
        }
        else if (j == n-2){
            char c1 = (s[j] - 48 - 1) + 'a';
            ans += c1;
            char c2 = (s[j+1] - 48 - 1) + 'a';
            ans += c2;
        }
        else if (j == n-1){
            char c = (s[j] - 48 - 1) + 'a';
            ans += c;
        }
    

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}