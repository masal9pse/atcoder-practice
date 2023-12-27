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
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> ac(n);
    rep(i, n) cin >> a[i];
    ac = a;
    sort(a.begin(), a.end());
    map<ll, ll> ma;
    rep(i, n) ma[a[i]] = 0;
    ll giri = k / n;
    ll giri_give = n * giri;
    rep(i, n) ma[a[i]] = giri;
    ll last = k - giri_give;
    rep(i, last)
    {
        ma[a[i]]++;
    }
    rep(i, n)
    {
        cout << ma[ac[i]] << endl;
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