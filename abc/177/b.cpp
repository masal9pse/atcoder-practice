#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#include <cassert>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 0; i <= n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int s_n = s.size();
    int t_n = t.size();
    int n = s_n - t_n;
    vector<int> counts(n + 1);
    int ans = 10000;
    rep1(i, n)
    {
        string sub_str = s.substr(i, t_n);
        int n2 = sub_str.size();
        rep(j, n2)
        {
            if (sub_str[j] != t[j])
                counts[i]++;
        }
    }
    rep(i, n + 1)
    {
        ans = min(ans, counts[i]);
    }
    cout << ans << endl;
    return 0;
}