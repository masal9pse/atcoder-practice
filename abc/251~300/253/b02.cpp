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
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    vector<P> d;
    rep(i, h) rep(j, w)
    {
        if (s[i][j] == 'o')
        {
            d.emplace_back(i, j);
        }
    }
    int n = d.size();
    int ans = 1001001001;
    rep(i, n) rep(j, i)
    {
        int k = abs(d[i].first - d[j].first) + abs(d[i].second - d[j].second);
        ans = min(k, ans);
    }
    cout << ans << endl;
    return 0;
}