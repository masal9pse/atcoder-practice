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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    set<string> st;
    rep(i, n) cin >> s[i];
    rep(i, m)
    {
        string t;
        cin >> t;
        st.insert(t);
    }
    rep(i, n)
    {
        if (st.count(s[i]))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}