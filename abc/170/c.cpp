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
// #define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)


// vectorの中で該当の要素と最も違い値が0の要素番号を求める。
int getNearIndex(vector<int> d,int x) {
    P ans(99999,-1);
    rep(i,102) {
        if (d[i] == 1) continue;
        int dif = abs(x-i);
        // pairの比較の場合、まずはfirstからminのチェックが入り、もしfirstがminの第１引数と同じであればsecondで比較される。
        ans = min(ans,P(dif,i));
        int k = 3;
    }
    return ans.second;
}

int main()
{
    int x, n;
    cin >> x >> n;
    vector<int> p(n);    
    rep(i, n) cin >> p[i];
    vector<int> d(102);
    rep(i, n) d[p[i]] = 1;    
    // vectorの中で該当の要素と最も違い0の要素数を求める。
    int ans = getNearIndex(d,x);
    cout << ans << endl;
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