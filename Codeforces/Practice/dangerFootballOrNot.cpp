// A. Football
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

// Input
// The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

// Output
// Print "YES" if the situation is dangerous. Otherwise, print "NO".

// Examples
// inputCopy
// 001001
// outputCopy
// NO
// inputCopy
// 1000000001
// outputCopy
// YES

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int conOnes = 0, conZeros = 0;
    unordered_map<char, int> m;
    m['0'] = 0, m['1'] = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            conZeros++;
            if (conOnes > m['1'])
                m['1'] = conOnes;
            conOnes = 0;
        }
        if (s[i] == '1')
        {
            conOnes++;
            if (conZeros > m['0'])
                m['0'] = conZeros;
            conZeros = 0;
        }
    }

    if (m['0'] < conZeros)
        m['0'] = conZeros;
    if (m['1'] < conOnes)
        m['1'] = conOnes;

    // cout << m['0'] << " " << m['1'] << endl;
    if (m['0'] >= 7 or m['1'] >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}