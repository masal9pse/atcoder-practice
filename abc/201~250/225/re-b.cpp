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
    int n;
    cin >> n;
    vector<int> a(n - 1), b(n - 1);
    rep(i, n) cin >> a[i] >> b[i];
    map<int, int> mab;    
    rep2(i,n) mab[i] = 0;            
    rep(i, n)
    {
        if (mab.count(a[i])) {
            mab[a[i]] ++;
            int k = 3;
        }
        if (mab.count(b[i])) {
            mab[b[i]] ++;
            int k = 3;
        }
    }
    rep2(i, n)
    {
        // cout << a[i] << endl;
        if (mab[i] == n-1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
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