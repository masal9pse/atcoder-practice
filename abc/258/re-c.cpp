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
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<P> query(n);
    rep(i, q) cin >> query[i].first >> query[i].second;
    vector<char> ans;
    rep(i, q)
    {
        if (query[i].first == 1)
        {
            rep(k, query[i].second)
            {
                string last = string(1, s[n - 1]);
                string trim_str = s.substr(0, n - 1);
                s = last + trim_str;
            }
        }
        else if (query[i].first == 2)
        {
            ans.push_back(s[query[i].second - 1]);
        }
    }
    rep(i, n) cout << ans[i] << endl;
    return 0;
}