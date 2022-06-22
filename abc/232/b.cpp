#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    rep(k, 26)
    {
        string s2;
        rep(i, s.size())
        {
            char x = ((s[i] - 'a') + k + 26) % 26 + 'a';
            s2 += string(1, x);
        }
        if (s2 == t)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}