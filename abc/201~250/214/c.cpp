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
#define rep2(i, n) for (int i = 1; i <= n; i++)

int main()
{
    int n, q;
    cin >> n >> q;
    vector<P> ab(n - 1), cd(q);
    vector<string> ans;
    rep(i, n - 1) cin >> ab[i].first >> ab[i].second;
    rep(i, q) cin >> cd[i].first >> cd[i].second;
    rep(i, q)
    {
        rep(j, i)
        {
            if (ab[i].first == cd[i].first && ab[i].first == cd[i].first)
            {
                if (cd[j].second - 1 == cd[j].first)
                    ans.push_back("Road");
                else
                    ans.push_back("Town");
            }
        }
    }
    // rep(j, q)
    // {
    //     if (cd[j].second - 1 == cd[j].first)
    //         ans.push_back("Road");
    //     else
    //         ans.push_back("Town");
    // }
    rep(i, q) cout << ans[i] << endl;
    return 0;
}

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

// 隣り合う要素を足し算する。
vector<int> getNextSumList(vector<int> a, int n)
{
    int sum = 0;
    vector<int> b(n);
    rep(i, n)
    {
        sum += a[i];
        b[i] += sum;
    }
    return b;
}

// 隣り合う要素を引き算する。
vector<int> getNextSubList(vector<int> a, int n)
{
    vector<int> b;
    sort(b.begin(), b.end());
    rep(i, n + 1)
    {
        if (i != n + 1)
        {
            int sub = a[i + 1] - a[i];
            b.push_back(sub);
        }
    }
    return b;
}