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

// ランレングス圧縮
vector<P> rle(const string &s)
{
    vector<P> res;
    for (char c : s)
    {
        if (res.size() > 0 && res.back().first == c)
        {
            res.back().second++;
        }
        else
        {
            res.emplace_back(c, 1);
        }
    }
    return res;
}

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    // ll sum = 0;
    vector<bool> flag(w);
    // １個目のとき
    rep(i, n)
    {
        if (a[i] <= w)
            flag[a[i] - 1] = true;
    }
    // ２個目のとき
    rep(i, n)
    {
        rep(j, i)
        {
            ll sum = a[i] + a[j];
            if (sum <= w)
                flag[sum - 1] = true;
        }
    }
    // ３個目のとき
    rep(i, n)
    {
        rep(j, i)
        {
            rep(k, j)
            {
                ll sum = a[i] + a[j] + a[k];
                if (sum <= w)
                {
                    flag[sum - 1] = true;
                }
                int aa = 3;
            }
        }
    }
    rep(i, w)
    {
        if (flag[i])
            ans++;
    }
    cout << ans << endl;
    return 0;
}