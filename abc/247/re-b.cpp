#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> st(n);
    rep(i, n)
    {
        string s, t;
        cin >> s >> t;
        st[i].first = s;
        st[i].second = t;
    }
    bool flag = true;
    rep(i, n)
    {
        bool flag2 = true;
        rep(j, n)
        {
            string a = st[i].first;
            string a2 = st[i].second;
            string b = st[j].first;
            string b2 = st[j].second;
            if (i != j)
            {                
                if (flag2)
                {
                    if (a == b || a == b2)
                    {
                        if (a2 == b || a2 == b2)
                        {
                            flag = false;
                        }
                    }
                }
                // if (a == b || a == b2)
                // {
                //     if (a2 == b || a2 == b2)
                //     {
                //         flag = false;
                //     }
                // }
            }
        }
        if (flag2) flag = true;
        if (flag) {
            cout << ""
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}