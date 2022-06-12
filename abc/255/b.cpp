#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
// #include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    if (s == t)
    {
        cout << "Yes" << endl;
        return 0;
    }

    rep(i, s.size())
    {
        string ns;
        ns = s;
        swap(ns[i], ns[i + 1]);
        if (ns == t)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}