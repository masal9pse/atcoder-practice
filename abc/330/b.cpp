// https://drken1215.hatenablog.com/entry/2023/11/26/015234
// こっちの方がいいな↓
// https://programming-hiroba.com/abc330-b/
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
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    vector<int> p(m);
    ll ans = 0;
    rep(i, n) cin >> c[i];
    rep(i, m) cin >> d[i];
    int p0 = -1;
    rep(i, m + 1)
    {
        int p_tmp;
        cin >> p_tmp;
        if (i == 0)
            p0 = p_tmp;
        else
        {
            p[i-1] = p_tmp;
        }
    }
    rep(i, n)
    {
        bool flag = false;
        rep(j, m)
        {
            if (c[i] == d[j])
            {
                ans += p[j];
                flag = true;
                break;
            }
        }
        if (!flag) {
            ans += p0;
            int c = 33;
        }
    }
    cout << ans << endl;
    return 0;
}