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

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    vector<P> p;
    vector<bool> ok(n);
    rep(i, n)
    {
        p.emplace_back(a[i] * -1, i);
    }
    sort(p.begin(), p.end());
    rep(i,x) ok[p[i].second] = true;

    // 初期化
    p = vector<P>();
    rep(i,n) {
        if (!ok[i]) p.emplace_back(b[i]*-1,i);
    }
    sort(p.begin(),p.end());
    rep(i,y) ok[p[i].second] = true;

    p = vector<P>();
    rep(i,n) {
        if (!ok[i]) p.emplace_back((a[i]+b[i])*-1,i);
    }
    sort(p.begin(),p.end());
    rep(i,z) ok[p[i].second] = true;
    rep(i,n) {
        if (ok[i]) cout << i + 1 << endl;
    }
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